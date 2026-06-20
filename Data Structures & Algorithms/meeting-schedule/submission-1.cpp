/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size() == 0) return true;
        sort(intervals.begin(), intervals.end(), [](auto& x, auto& y) { 
            return x.start < y.start; 
        });

        int end = intervals[0].start;
        for(auto interval : intervals){
            int start = interval.start;
            if (end > start){
                return false;
            }
            end = interval.end;
        }


        return true;
    }
};
