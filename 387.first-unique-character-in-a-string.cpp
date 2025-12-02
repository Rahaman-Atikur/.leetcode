/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */
// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> f(26);
        int n = s.size();
        for (auto i : s)
        {
            f[i - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            if (f[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
// @lc code=end
