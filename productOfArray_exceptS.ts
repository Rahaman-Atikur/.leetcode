/*
  The idea is to initialize an array of the size nums.length
  and filled with 1s. After that, go over the array from the start
  until the end and set each element as the product of the previous elements.
  
  Then, iterate one more time from the end until the start and update each element
  of the resulted array with the product of the elements which go after it.
*/
function productExceptSelf(nums: number[]): number[] {
  let product = 1;
  let result = new Array(nums.length);
    
  for (let i = 0; i < nums.length; i += 1) {
    result[i] = product;
    product *= nums[i];
  }
  product = 1;
  for (let i = nums.length - 1; i >= 0; i -= 1) {
    result[i] *= product;
    product *= nums[i];
  }
    
  return result;
};