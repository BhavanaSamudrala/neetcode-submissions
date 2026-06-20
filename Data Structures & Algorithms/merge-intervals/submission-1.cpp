class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // we will have to sort the intervals in ascending order by the start time.
        sort(intervals.begin(), intervals.end());

        // store the output in an output vector. The first value is the first interval.
        // initially it is not merged. 
        vector<vector<int>> output{intervals[0]};

        // iterate over the given intervals and identify which intervals to merge.
        for(int i=1; i<intervals.size(); i++){
            vector<int> curr_interval = intervals[i];
            /* 
             to identify if merging is necessary or not. 
             we compare the ending time of the last interval with  
             starting time of the curr interval.
            */
            int last_interval_end = output[output.size()-1][1];

            int curr_interval_start = curr_interval[0];
            int curr_interval_end = curr_interval[1];

            // if the curr_interval started before the last interval ended
            if (curr_interval_start <= last_interval_end){
                // set the end time of last interval equal to the interval that is ending last.
                output[output.size()-1][1] = max(curr_interval_end, last_interval_end);
            } else{
                // otherwise push the curr interval to the output vector.
                output.push_back(curr_interval);
            }
        }

        return output;
    }
};
