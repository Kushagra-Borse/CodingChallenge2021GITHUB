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


class Solution:
    def reverseWords(self, s: str) -> str:
        return ' '.join(s.split()[::-1])