class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        left = 0
        max_freq = 0
        frequency = {}
        longest_str_len = 0

        for right in range(len(s)):
            # Expand the window
            frequency[s[right]] = frequency.get(s[right], 0) + 1
            max_freq = max(max_freq, frequency[s[right]])

            # Shrink the window if the condition is violated
            # (cells count - max frequency of any character seen > k)
            while (right - left + 1) - max_freq > k:
                frequency[s[left]] -= 1
                if frequency[s[left]] == 0:
                    del frequency[s[left]]
                left += 1

            # Update the result if the current window is larger
            longest_str_len = max(longest_str_len, right - left + 1)

        return longest_str_len