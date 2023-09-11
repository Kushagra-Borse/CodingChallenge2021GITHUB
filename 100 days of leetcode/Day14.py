class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """

        avg = 0.0
        x = len(nums)

        for i in range(k):
            avg += (nums[i])
        temp = avg + 0.0
        for i in range(k,x):
            temp += nums[i] - nums[i-k]

            if(temp > avg):
                avg = temp
        
        return (avg / k)