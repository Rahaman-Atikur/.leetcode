/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left =0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]!=0){
                swap(nums[right],nums[left]);
                left++;
            }
        }
        
    }
};
// @lc code=end

