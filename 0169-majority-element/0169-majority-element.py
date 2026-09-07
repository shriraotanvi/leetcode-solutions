class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        element = None
        for i in range(len(nums)):
            if count == 0:
                count = 1
                element = nums[i]
            elif nums[i] == element:
                count += 1
            else:
                count -= 1
        
        count1 = 0
        for i in range(len(nums)):
            if nums[i] == element:
                count1 += 1
        
        if count1 > len(nums)/2:
            return element
        else:
            return -1