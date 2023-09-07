class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        x = len(flowerbed)
        if(n == 0):
            return True
        
        for i in range(x):
            if n > 0:
                if (flowerbed[i] == 0) and (i == 0 or flowerbed[i-1] == 0 ) and (i == x - 1 or flowerbed[i+1] == 0):
                    flowerbed[i] = 1
                    i += 1
                    n -= 1
        
        if n == 0:
            return True
        return False
        