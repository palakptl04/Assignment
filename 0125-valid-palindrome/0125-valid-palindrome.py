class Solution:
    def isPalindrome(self, s: str) -> bool:
        r=""
        for i in s:
            if i.isalpha() or i.isdigit():
                if i.isupper():
                    i=i.lower()
                r+=i
        rev=r[::-1]
        if r==rev:
            return True
        return False
                
        