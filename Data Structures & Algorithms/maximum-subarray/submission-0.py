class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        i = 0
        while(i < len(nums) and nums[i] < 0):
            i += 1

        print(i)
        if i >= len(nums) - 1:
            return max(nums)
        
        j = i+1

        curr_sum = nums[i] # 4, 2, 4, 5, 4, 8
        ans = curr_sum # 8
        while(j < len(nums)):
            curr_sum = max(nums[j]+curr_sum, 0)
            ans = max(ans, curr_sum)
            j += 1
            
        return ans
        