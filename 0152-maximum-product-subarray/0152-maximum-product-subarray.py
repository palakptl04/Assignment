class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        maxi = float('-inf')
        prefix = 0
        suffix = 0
        
        for i in range(len(nums)):
            # If previous product was 0, reset to 1, otherwise multiply by current number
            prefix = (prefix or 1) * nums[i]
            suffix = (suffix or 1) * nums[~i]  # ~i counts backwards from the end
            
            maxi = max(maxi, prefix, suffix)
            
        return maxi