# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        result = ListNode() #This is a dummy node.
        result_tail = result
        
        
        while(list1 and list2):
            if(list1.val > list2.val):
                result_tail.next = list2
                result_tail = result_tail.next
                list2 = list2.next
            else:
                result_tail.next = list1
                result_tail = result_tail.next
                list1 = list1.next
        
        if(list1):
            result_tail.next = list1
        else:
            result_tail.next = list2
        
        return result.next


        
