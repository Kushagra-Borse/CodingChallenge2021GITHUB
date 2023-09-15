class Solution:
    def increasingTriplet(self, nums):
        first_min = float('inf')   # Initialize the first minimum to positive infinity.
        second_min = float('inf')  # Initialize the second minimum to positive infinity.

        for num in nums:
            if num <= first_min:
                first_min = num       # Update the first minimum.
            elif num <= second_min:
                second_min = num      # Update the second minimum.
            else:
                return True           # If we find a number greater than both first_min and second_min, return True.

        return False                # If no increasing triplet is found, return False.
