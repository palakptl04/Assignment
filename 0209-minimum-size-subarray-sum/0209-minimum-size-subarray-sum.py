class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l, s, m = 0, 0, float('inf')
        for r in range(len(nums)):
            s += nums[r]
            while s >= target:
                current_len = r - l + 1
                if current_len < m:
                    m = current_len
               
                s -= nums[l]
                l += 1
        return 0 if m == float('inf') else m