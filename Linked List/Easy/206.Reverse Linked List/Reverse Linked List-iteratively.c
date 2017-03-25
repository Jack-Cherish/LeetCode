/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL || head->next == NULL){
        return head;
    }
    pre = head;
    cur = head->next;
    pre->next = NULL;
    while(cur != NULL){
        temp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = temp;
    }
    return pre;
}
