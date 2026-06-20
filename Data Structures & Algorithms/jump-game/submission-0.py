class Solution:
    def canJump(self, nums: List[int]) -> bool:
        
        i = 0
        j = i + nums[i]
        while i < len(nums) and j < len(nums) - 1:
            i += 1
            if i > j:
                return False 
            j = max(i+nums[i], j)
        
        
        return True
            
        