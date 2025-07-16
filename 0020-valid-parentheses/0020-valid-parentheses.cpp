#include<stack>
#include<string>
class Solution {
public:
    bool isValid(string s) {
        int l=s.length();
        stack<char> c;
        for(int i=0;i<l;i++){
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                c.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')'){
                if(c.empty())
                    return false;
                char top=c.top();
                c.pop();
                if((s[i]=='}' && top!='{') || (s[i]==']' && top!='[') || (s[i]==')'&& top!='('))
                return false;
            }
        }  
        return c.empty(); 
    }

};