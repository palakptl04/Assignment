#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ")
            return true;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string t;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ')
                if(isalpha(s[i]) || isdigit(s[i]))
                    t+=s[i];
        }
        string str=t;
        reverse(t.begin(),t.end());
        if(str==t)
            return true;
        return false;
    }
};