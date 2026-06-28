class Solution(object):
    def countSubstrings(self, s):
        n = len(s)
        t = "#"

        for c in s:
            t += c + "#"
        n = len(t)
        dp = [0] * n
        center, right, count = 0, 0, 0
        for i in range(n):
            mirror = 2 * center - i
            if i < right:
                dp[i] = min(right - i, dp[mirror])
            # Attempt to expand palindrome centered at i
            a, b = i + (1 + dp[i]), i - (1 + dp[i])
            while a < n and b >= 0 and t[a] == t[b]:
                dp[i] += 1
                a += 1
                b -= 1
            # If palindrome centered at i expands past right,
            # adjust center and right boundaries
            if i + dp[i] > right:
                center = i
                right = i + dp[i]
            # Count the palindromes found at index i
            count += (dp[i] + 1) // 2
        return count