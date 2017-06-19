/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    int index = 0;
    int listlength = 1;
    struct ListNode *newlist = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tail = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL){
        return NULL;
    }
    tail = head;
    newlist = head;
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
    for(index; index < k-1; index++){      //找都新链表头
        newlist = newlist->next;
    }
    head = newlist->next;           //新链表头
    newlist->next = NULL;           //链表结尾赋值NULL
    return head;                    //返回链表头结点
}