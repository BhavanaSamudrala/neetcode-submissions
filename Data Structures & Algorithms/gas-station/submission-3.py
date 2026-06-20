class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        
        diff = [gas[i] - cost[i] for i in range(len(gas))]
        if sum(diff) < 0: return -1 

        print(diff)
        start_idx = 0
        for i, d in enumerate(diff):
            if d > 0:
                start_idx = i
                break

        cost = diff[start_idx]
        for i in range(start_idx+1, len(diff)):
            cost += diff[i]
            if cost < 0:
                start_idx = i+1
                cost = 0

        return start_idx