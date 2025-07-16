#include<vector>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        for(int i=size-1;i>=0;i--){
           if(digits[i]+1!=10){
            digits[i]+=1;
            return digits;
           } 
           digits[i]=0;
           
        }
           digits = vector<int>(size + 1, 0);
           digits[0]=1;
           return digits; 
    }
};