class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string r;
        while (i>=0 || j>=0 || carry==1){
            if(i>=0)
                carry+=a[i--]-'0';
            if(j>=0)
                carry+=b[j--]-'0';
            r+=carry%2+'0';
            carry/=2;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};