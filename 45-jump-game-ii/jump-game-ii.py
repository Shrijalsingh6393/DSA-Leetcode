class Solution(object):
    def jump(self, nums):
        n = len(nums)
        jump = 0
        curr = 0
        far = 0
        for i in range(n-1):
            far = max(far,i+nums[i])
            if(curr==i):
                jump += 1
                curr = far
        return jump
        