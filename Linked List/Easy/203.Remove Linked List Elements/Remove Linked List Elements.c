/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *pre = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *newlist = (struct ListNode *)malloc(sizeof(struct ListNode));
    newlist->next = head;
    pre = newlist;
    cur = head;
    while(cur != NULL){
        if(cur->val == val){
            cur = cur->next;
            pre->next = cur;
        }
        else{
            pre = cur;
            cur = cur->next;
        }
    }
    return newlist->next;
}