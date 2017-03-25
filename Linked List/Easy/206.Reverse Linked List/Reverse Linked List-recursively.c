/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* new_head = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL || head->next == NULL){
        return head;
    }
//迭代到最深层，返回的时候cur的地址和new_head的地址是一致的。操作cur就相当于操作new_head。head->next = NULL 就是将已经返回后的值丢掉。
    cur = head->next;
    new_head = reverseList(cur);
    head->next = NULL;
    cur->next = head;
    return new_head;
}