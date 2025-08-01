class Solution {
public:
    int singleNumber(vector<int>& nums) {
        bool flag;
        int n;
        for(int i=0;i<nums.size();i++){
            flag=false;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i!=j){
                    flag=true;
                }
            }
            if(!flag)
                n=nums[i];
        }
        return n;
    }
    
};