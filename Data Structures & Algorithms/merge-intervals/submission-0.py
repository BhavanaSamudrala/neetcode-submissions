class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key = lambda i : i[0])
        output = [intervals[0]]

        for curr_interval in intervals[1:]:
            
            last_end = output[-1][1]

            curr_start = curr_interval[0]
            curr_end = curr_interval[1]

            
            # overlapping case
            if curr_start <= last_end:
                output[-1][1] = max(last_end, curr_end)
            
            else:
                output.append(curr_interval)
        
        return output


