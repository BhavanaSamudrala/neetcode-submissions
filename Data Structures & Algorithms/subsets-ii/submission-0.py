class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort() # 1, 1, 2
        res = []

        subset = []
        def dfs(i):
            if i >= len(nums):
                res.append(subset.copy())
                return
            
            # include nums[i]
            subset.append(nums[i])
            dfs(i+1)

            # skip duplicates
            while(i+1 < len(nums) and nums[i] == nums[i+1]):
                i+=1

            # don't include nums[i]
            subset.pop()
            dfs(i+1)

            return


        dfs(0)
        
        return res
        