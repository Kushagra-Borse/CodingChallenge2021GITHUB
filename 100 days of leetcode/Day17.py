class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        answer = []

        # Finding if there are two zeros or more
        count = 0
        for i in range(len(nums)):
            if(nums[i] == 0):
                count += 1

        if(count > 1):  # If number of zeros is greater than two
            for i in range(len(nums)):
                answer.append(0)

        elif(count == 1): # If number of zero is one
            temp = 1
            index = 0
            for i in range(len(nums)):
                if(nums[i] != 0):
                    temp *= nums[i]
                else:
                    index = i
                answer.append(0)
            answer[index] = temp
        else: # if there is no zero element
            temp = 1
            for i in range(len(nums)):
                temp *= nums[i]
            for i in range(len(nums)):
                answer.append(temp/nums[i])

        return answer
    