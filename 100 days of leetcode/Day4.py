class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        pri = {
            'I' : 1,
            'V' : 5,
            'X' : 10,
            'L' : 50,
            'C' : 100,
            'D' : 500,
            'M' : 1000
            }
        sum = 0
        prev = pri[s[0]]
        sum = sum + prev
        for i in range(1, len(s)):
            if prev < pri[s[i]]:
                sum = sum - prev - prev + pri[s[i]]
                prev = pri[s[i]]
            else:
                sum = sum + pri[s[i]]
                prev = pri[s[i]]
        return sum
        