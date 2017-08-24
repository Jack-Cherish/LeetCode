# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        if not head:
            return None
        tail = head
        listlength = 1
        while tail.next:
            tail = tail.next
            listlength += 1
        k = k % listlength
        if k == 0:
            return head
        k = listlength - k
        tail.next = head
        newlist = head
        for each in range(k - 1):
            newlist = newlist.next
        head = newlist.next
        newlist.next = None
        return head