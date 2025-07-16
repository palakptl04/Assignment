class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j;
        int n=haystack.size();
        int m=needle.size();
        for(i=0;i<=n-m;i++){
            if(haystack.substr(i,m)==needle)
                return i;
        }
        return -1;
        
    }
};