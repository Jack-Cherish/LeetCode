/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *curA = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *curB = (struct ListNode*)malloc(sizeof(struct ListNode));
    curA = headA;
    curB = headB;
    int length_a = 1;
    int length_b = 1;
    int i = 0;
    if(curA == NULL || curB == NULL){
        return NULL;
    }
    while(curA->next != NULL){
        curA = curA->next;
        length_a++;
    }
    while(curB->next != NULL){
        curB = curB->next;
        length_b++;
    }
    if(curA != curB){
        return NULL;
    }
    curA = headA;
    curB = headB;
    if(length_a > length_b){
        for(i; i < length_a-length_b; i++){
            curA = curA->next;
        }
        i = 0;
    }
    else if(length_a < length_b){
        for(i; i < length_b-length_a; i++){
            curB = curB->next;
        }
        i = 0;
    }
    while(curA != curB){
        curA = curA->next;
        curB = curB->next;
    }
    return curA;
}