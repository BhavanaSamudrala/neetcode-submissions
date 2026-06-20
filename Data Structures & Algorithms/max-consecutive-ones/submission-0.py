class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        # approch - make a new variable named max_count = 0
        # count = 0
        # for num in range(len(nums)):
        #   if num == 1 ---> i +=1 ---> 
        # if num =! 1 ---> add the i value to the list to maximum_num
        max_count = 0
        count = 0
        for num in nums:
            if num == 1:
                count += 1
                max_count = max(max_count,count)
            else:
                count = 0
        return max_count