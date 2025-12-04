/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
       int stringLength = s.size();
       int firstPointer = 0;
       int lastPointer = s.size()-1;
       while(firstPointer<lastPointer){
        swap(s[firstPointer],s[lastPointer]);
        firstPointer++;
        lastPointer--;
       }
       return;
    }
    
};
// @lc code=end

