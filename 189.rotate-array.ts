/*
 * @lc app=leetcode id=189 lang=typescript
 *
 * [189] Rotate Array
 */

// @lc code=start
/**
 Do not return anything, modify nums in-place instead.
 */
function rotate(nums: number[], k: number): void {
    const arr = [...nums];
    const arrLength = nums.length;
    for(let i =0;i<arrLength;i++){
        let index = (i+k)%arrLength ;
        nums[index]= arr[i];

    }
};

// @lc code=end

