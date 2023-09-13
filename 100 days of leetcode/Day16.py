class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        li = s.split()
        li.reverse()
        ans = " ".join(li)
        return ans
