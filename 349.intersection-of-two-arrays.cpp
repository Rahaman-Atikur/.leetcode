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
       set<int>s;
       vector<int>ans;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       int first =0;
       int second =0;
       while(first<nums1.size() && second<nums2.size()){
        if(nums1[first]==nums2[second]){
            s.insert(nums1[first]);
            first++;
            second++;
        }
        else{
            if(nums1[first]<nums2[second]){
                first++;
            }
            else{
                second++;
            }
        }
       }
       for(auto it:s){
        ans.push_back(it);
       }
       return ans;
    }
};
// @lc code=end

