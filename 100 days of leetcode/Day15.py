class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """

        lis = [0]

        for i in range(1,n+1):
            if(i%2 == 0):
                lis.append(lis[i/2])
            else:
                lis.append(lis[i/2] + 1)
        
        return lis

# Method two


class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = [0] * (n + 1)
        offset = 1
        for i in range(1, n + 1):
            if offset * 2 == i:
                offset *= 2
            ans[i] = ans[i - offset] + 1
        return ans

