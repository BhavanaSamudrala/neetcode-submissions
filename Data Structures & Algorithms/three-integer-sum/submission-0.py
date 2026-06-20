class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()

        solution = []

        for i, num in enumerate(nums):
            if num > 0:
                break
            elif i > 0 and num == nums[i-1]:
                continue
            j = i+1
            k = len(nums)-1
            while k > j:
                n1, n2 = nums[j], nums[k]
                if num + n1 + n2 == 0:
                    solution.append([num, n1, n2])
                    j +=1
                    k -=1
                    while nums[j] == nums[j-1] and k > j:
                        j+=1
                elif num + n1 + n2 > 0:
                    k-=1
                else:
                    j+=1
        
        return solution
        