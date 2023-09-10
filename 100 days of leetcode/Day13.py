class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
    i, j = 0, 0  # Pointers for strings s and t
    while i < len(s) and j < len(t):
        if s[i] == t[j]:
            i += 1  # Move to the next character in s
        j += 1  # Always move to the next character in t
    return i == len(s)  # If i reaches the end of s, it's a subsequence