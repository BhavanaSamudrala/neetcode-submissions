class Solution {
public:
    int findMin(vector<int> &nums) {
        /*
        [5,6,1,2,3,4] if it was rotated 2 times. // increasing both side; on the smallest number.
        [4,5,6,1,2,3] if it was rotated 3 times. // decreasing both side; right is the smallest.

        [6,1,2,3,4,5] if it was rotated 1 times. //
        [3,4,5,6,1,2] if it was rotated 4 times.
        [2,3,4,5,6,1] if it was rotated 5 times.
        */

        // if the first value < last value; first val is the smallest;
        if ((nums[0] < nums[nums.size()-1]) || nums.size()==1) return nums[0];
        if (nums.size()==2) return min(nums[0], nums[1]);

        int l = 0, r = nums.size()-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            if (nums[mid-1] > nums[mid] && nums[mid+1] > nums[mid]) return nums[mid];
            if (nums[mid-1] < nums[mid] && nums[mid+1] < nums[mid]) return nums[mid+1];
            if (nums[l] < nums[mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return 1;
    }
};
