/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* next = (struct ListNode *)malloc(sizeof(struct ListNode));
    pre=NULL;
    next=NULL;
    while(head!=NULL){
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }
    return pre;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode* slow = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode* fast = (struct ListNode *)malloc(sizeof(struct ListNode));
    if(head == NULL || head->next == NULL){
        return true;
    }
    fast = head;
    slow = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = reverseList(slow->next);
    while(slow){
        if(head->val != slow->val){
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}