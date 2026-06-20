class Solution:
    def combinationSum2(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        
        res = []
        subset = []

        
        def dfs(i, c_sum=0):
            if c_sum == target:
                res.append(subset.copy())
                return

            elif c_sum > target or i >= len(nums):
                return
            
            # include nums[i]
            subset.append(nums[i])
            dfs(i+1, c_sum+nums[i])
            
            # not included nums[i]
            subset.pop()
            while i+1 < len(nums) and nums[i] == nums[i+1]:
                i += 1
            dfs(i+1, c_sum)
            return

        dfs(0)
            
        return res