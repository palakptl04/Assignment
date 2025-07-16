class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.length();
        int k=0;
        bool word=false;
        for(int i=0;i<size;i++){
            if(s[i]!=' '){
                if(!word){
                    k=1;
                    word=true;
                }
                else
                    k++;
            }
            else
                word=false;
        }   
        return k;
    }
};