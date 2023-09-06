class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """

        max_candies = max(candies)
        result = []
        for candy_value in candies:
            if candy_value + extraCandies >= max_candies:
                result.append(True)
            else:
                result.append(False)
        return result
