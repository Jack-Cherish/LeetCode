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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode newlist(INT_MIN);
        ListNode *temp = &newlist;
        if(l1 == NULL && l2 == NULL){
            return NULL;
        }
        if(l1 != NULL && l2 == NULL){
            return l1;
        }
        if(l1 == NULL && l2 != NULL){
            return l2;
        }
        while(l1 && l2){
            if(l1->val < l2->val){
                temp->next = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp->next = l1 ? l1 : l2;
        return newlist.next;
    }
};