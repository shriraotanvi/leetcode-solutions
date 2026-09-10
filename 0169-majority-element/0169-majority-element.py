class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        mpp = {}

        for i in range(len(nums)):
            if nums[i] in mpp:
                mpp[nums[i]] += 1
            else:
                mpp[nums[i]] = 1
        
        for i, j in mpp.items():
            if j > len(nums)/2:
                return i
        return -1