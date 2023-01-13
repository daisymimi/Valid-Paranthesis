//https://leetcode.com/problems/valid-parentheses/description/
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<int> mystack;
        bool flag=true;
        char temp='-';
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                mystack.push(s[i]);
            }
            else
            {   if(!mystack.empty())
                {
                    temp=mystack.top();
                    mystack.pop();
                    if (s[i] == ')' && temp != '(')
                    return false;
                    else if (s[i] == '}' && temp != '{')
                    return false;
                    else if (s[i] == ']' && temp != '[')
                    return false;
                }
                else
                return false;
            }
        }
        if(!mystack.empty())
            return false;
        return flag;
    }
};
