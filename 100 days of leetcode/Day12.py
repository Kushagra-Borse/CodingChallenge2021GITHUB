class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        x = len(nums)

        i = 0
        j = 0
        while(i < x and j < x):
            while(i < x and nums[i] != 0):
                i+=1
            

            while(j < x and (nums[j] == 0 or j <= i)):
                j+=1

            if(i < x and j < x):
                temp = nums[j]
                nums[j] = nums[i]
                nums[i] = temp
                i+=1
                j+=1