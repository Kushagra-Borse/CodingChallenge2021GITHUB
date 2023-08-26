class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """

        if x < 0:
            return False  

        y = 0
        temp = x
        n_digits = len(str(x))

        for i in range(n_digits - 1, -1, -1):
            y += (x % 10) * 10 ** i
            x //= 10

        return temp == y
