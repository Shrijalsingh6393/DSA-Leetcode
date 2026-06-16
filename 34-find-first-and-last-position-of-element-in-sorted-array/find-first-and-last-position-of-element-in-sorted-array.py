class Solution(object):
    def searchRange(self, nums, target):
        n = len(nums)
        first = -1
        last = -1
        for i in range(n):
            if(nums[i]==target):
                if first == -1:
                    first = i
                last = i
        return [first,last]
        