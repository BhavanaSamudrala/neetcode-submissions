class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''indices = {}

        for i,n in enumerate(nums):
            diff = target - n
            if diff in indices:
                return [indices[diff], i]      
            indices[n] = i
        return [] '''

        indices = {}

        for index,number in enumerate(nums):
            difference = target - number
            if difference in indices:
                return [indices[difference],index]
            indices[number] = index
        return []