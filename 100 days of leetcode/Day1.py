class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #Memory efficient
        for i in range(0, len(nums)-1):
            for j in range(i+1, len(nums)):
                if (nums[i] + nums[j] == target):
                    return [i, j]

        #Runtime efficient
        # seen = {}
        # for i, num in enumerate(nums):
        #     remaining = target - num
            
        #     if remaining in seen:
        #         return [i, seen[remaining]]
            
        #     seen[num] = i

\
