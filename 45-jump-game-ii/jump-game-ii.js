/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function(nums) {
    let n = nums.length;
    let jump = 0;
    let far = 0;
    let curr = 0;
    for(let i=0;i<n-1;i++){
        far = Math.max(far,i+nums[i]);
        if(curr==i){
            jump++;
            curr = far;
        }
    }
    return jump;
};