class Solution:
    def combinationSum2(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        
        res = []
        subset = []

        
        def dfs(i, c_sum=0):
            if c_sum == target:
                res.append(subset.copy())
                return 1
            elif  i >= len(nums):
                return -1
            elif c_sum > target:
                return 0
            
            # include nums[i]
            subset.append(nums[i])
            b = dfs(i+1, c_sum+nums[i])

            if b == 0 or b == 1:
                i = len(nums)
            
        
            # not included nums[i]
            subset.pop()
            while i+1 < len(nums) and nums[i] == nums[i+1]:
                i += 1


            b = dfs(i+1, c_sum)

            if b == 1:
                i = len(nums)
                return 1

            return -1

        dfs(0)
            
        return res