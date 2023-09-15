class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        count = 0
        max = count

        for i in range(len(gain)):
            count += gain[i]
            if(count > max):
                max = count
        
        return max
