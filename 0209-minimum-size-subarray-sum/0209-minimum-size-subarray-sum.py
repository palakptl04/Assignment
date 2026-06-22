class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        i = 0
        j = 0
        current_sum = 0
        mn = float('inf')
        
        while j < len(nums):
            current_sum += nums[j]
            
            while current_sum >= target:
                mn = min(j - i + 1, mn)
                current_sum -= nums[i]
                i += 1
            j += 1
            
        return 0 if mn == float('inf') else mn