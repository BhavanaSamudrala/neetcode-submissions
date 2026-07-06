import heapq
from typing import List


def heapify_strings(strings: List[str]) -> List[str]:
    heap = []
    for s in strings:
        heap.append(s)
    heapq.heapify(heap)
    return heap


def heapify_integers(integers: List[int]) -> List[int]:
    heap = []
    for i in integers:
        heap.append(i)
    heapq.heapify(heap)
    return heap

def heap_sort(nums: List[int]) -> List[int]:
    heapq.heapify(nums)
    sorted_list = []
    while nums:
        sorted_list.append(heapq.heappop(nums))
    return sorted_list

# do not modify below this line
print(heapify_strings(["b", "a", "e", "c", "d"]))
print(heapify_integers([3, 4, 5, 1, 2, 6]))
print(heap_sort([3, 4, 5, 1, 2, 6]))
