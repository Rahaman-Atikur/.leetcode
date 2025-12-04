/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s)
    {
        if (s.size() == 0 || s.size() == 1)
            return true;
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while (l < r && !isalnum(s[l]))
                l++;
            while (l < r && !isalnum(s[r]))
                r--;
            if (tolower(s[l]) != tolower(s[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
};
// @lc code=end
