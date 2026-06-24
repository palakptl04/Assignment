class Solution:
    def minWindow(self, s: str, t: str) -> str:
        mp = [0] * 128

        for ch in t:
            mp[ord(ch)] += 1

        counter = len(t)
        begin = 0
        end = 0
        d = float('inf')
        head = 0

        while end < len(s):
            if mp[ord(s[end])] > 0:
                counter -= 1

            mp[ord(s[end])] -= 1
            end += 1

            while counter == 0:
                if end - begin < d:
                    d = end - begin
                    head = begin

                if mp[ord(s[begin])] == 0:
                    counter += 1

                mp[ord(s[begin])] += 1
                begin += 1

        return "" if d == float('inf') else s[head:head + d]