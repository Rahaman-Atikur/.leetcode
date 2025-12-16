/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=0;j<nums2.size()-1;j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                }
            }
        }
        return ans;
    }
};
// @lc code=end

