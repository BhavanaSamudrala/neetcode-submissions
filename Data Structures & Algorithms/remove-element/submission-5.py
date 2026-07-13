class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # nums = [], remove(val) 
        # return new array nums = [] without val
        # k is count of elements in nums array after removing val
        i = 0
        while i < len(nums):
            if nums[i] == val:
                nums.pop(i)
            else:
                i += 1
        return len(nums)