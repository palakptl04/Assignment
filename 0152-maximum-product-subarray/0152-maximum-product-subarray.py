class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        maxi = float('-inf')
        prod = 1

        # Forward pass
        for num in nums:
            prod *= num
            maxi = max(prod, maxi)
            if prod == 0:
                prod = 1

        prod = 1
        # Backward pass
        for num in reversed(nums):
            prod *= num
            maxi = max(prod, maxi)
            if prod == 0:
                prod = 1

        return maxi