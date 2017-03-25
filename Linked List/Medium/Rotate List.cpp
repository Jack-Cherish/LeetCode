/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        ListNode *tail = head;
        int listlength = 1;
        while(tail->next){              //计算链表长度
            tail = tail->next;
            listlength++;
        }
        k = k % listlength;             //k可能大于链表的长度
        if(k == 0){                     //k等于链表长度,不旋转
            return head;
        }
        k = listlength - k;             //移动前面listlength-k个节点到右侧,后k个节点不动
        tail->next = head;              //尾节点连接首节点
        ListNode *newlist = head;
        for(int index = 0; index < k-1; index++){      //找都新链表头
            newlist = newlist->next;
        }
        head = newlist->next;           //新链表头
        newlist->next = NULL;           //链表结尾赋值NULL
        return head;                    //返回链表头结点
    }
};