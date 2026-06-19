class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        d={}
        count=0
        left=0
        for i in range(len(s)):
            if s[i] not in d or d[s[i]]<left:
                d[s[i]]=i
                count=max(count,i-left+1)
            else:
                left=d[s[i]]+1
                d[s[i]]=i
            
        return count
