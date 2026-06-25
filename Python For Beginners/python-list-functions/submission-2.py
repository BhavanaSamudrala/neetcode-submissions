from typing import List # this is used to add type hints for List type

def get_sum(nums: List[int]) -> int:
    #return sum(nums)
    temp = 0
    for num in nums:
        temp += num
    return temp

def get_min(nums: List[int]) -> int:
    #return min(nums)
    current_min = nums[0]
    for n in nums:
        if n < current_min:
            current_min = n
    return current_min

def get_max(nums: List[int]) -> int:
    return max(nums)

# do not modify below this line
print(get_sum([1, 2, 3, 4, 5]))
print(get_sum([5, 4, 5, 6]))

print(get_min([7, 3, 4, 5]))
print(get_min([5, 4, 5, 6]))

print(get_max([7, 3, 4, 5]))
print(get_max([5, 4, 5, 6]))
