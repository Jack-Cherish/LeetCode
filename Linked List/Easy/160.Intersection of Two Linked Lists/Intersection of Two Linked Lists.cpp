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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *curA, *curB;
        curA = headA;
        curB = headB;
        if(curA == NULL || curB == NULL){
            return NULL;
        }
        int length_a = getLength(curA);
        int length_b = getLength(curB);
        if(length_a > length_b){
            for(int i=0; i < length_a-length_b; i++){
                curA = curA->next;
            }
        }
        else if(length_a < length_b){
            for(int i=0; i < length_b-length_a; i++){
                curB = curB->next;
            }
        }
        while(curA != curB){
            curA = curA->next;
            curB = curB->next;
        }
        return curA;
    }
private:
    int getLength(ListNode *head){
        int length = 1;
        while(head->next != NULL){
            head = head->next;
            length++;
        }
        return length;
    }
};