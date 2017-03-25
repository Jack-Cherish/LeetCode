/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* cur = (int *)malloc(sizeof(struct ListNode));
    cur = head;
    while(cur != NULL){
        while(cur->next != NULL && cur->val == cur->next->val){
            cur->next = cur->next->next;
        }
        cur = cur->next;
    }
    return head;
}