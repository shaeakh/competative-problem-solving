#include <bits/stdc++.h>
using namespace std;
/*bismillahir~rahmanir~rahim*/

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>stack;
        for(int i=0;i<n;i++){
            if(s[i]=='(' ||s[i]=='[' ||s[i]=='{'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty()) return false;
                char c = stack.top();
                if(c=='('&& s[i]==')') stack.pop();
                else if(c=='{' && s[i]=='}') stack.pop();
                else if(c=='['&& s[i]==']') stack.pop();
                else return false;
            }
        }
        if(stack.empty()) return true;
        else return false;
    }
};

int main()
{
    
}
/* problem link: */