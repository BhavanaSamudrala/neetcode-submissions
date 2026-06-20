class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
        
        nums.sort()
        
        res = []
        subset = []

        
        def dfs(i, c_sum=0):
            if c_sum > target or i >= len(nums):
                return 
            elif c_sum == target:
                res.append(subset.copy())
                return 
            
            # include nums[i]
            subset.append(nums[i])
            dfs(i, c_sum+nums[i])
        
            # not included nums[i]
            subset.pop()
            dfs(i+1, c_sum)

            return

        dfs(0)
            
        return res
        