class Solution:
    def jump(self, nums: List[int]) -> int:
        i = j = 0
        jumps = 0
        while j < len(nums) - 1:
            farthest = 0
            for i in range(i, j+1):
                farthest = max(farthest, i+nums[i])
            
            i = j+1
            j = farthest
            jumps += 1
        
        return jumps
            
            
            
        