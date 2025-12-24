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
    const N = nums.length;
    const K = k %N;
    const B = N-K-1;
    swap(nums,0,B);
    swap(nums,B+1,N-1);
    swap(nums,0,N-1);


};
function swap(nums:number[],head:number,tail:number){
   let temp = head;
    nums[head] = nums[tail];
    nums[tail] = temp;
}
// @lc code=end

