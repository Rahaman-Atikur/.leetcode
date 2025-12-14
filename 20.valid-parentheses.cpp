/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)            // Range based for Loop
        {
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                
                else
                {
                    if(c==')' && st.top()=='(')
                    {
                        st.pop();
                    }
                    else if(c=='}' && st.top()=='{')
                    {
                        st.pop();
                    }
                    else if(c==']' && st.top()=='[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;

                    }
                    
                }
            }

        }
        return st.empty();
    }
     
};
// @lc code=end
