class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r(rowIndex+1);
        r[0]=1;
       for(int i=1;i<rowIndex+1;i++){
            for(int j=i;j>0;j--){
                r[j]=r[j-1]+r[j];
            }
       }
       return r;
    }
};