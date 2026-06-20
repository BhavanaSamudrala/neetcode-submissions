class Solution {
public:
    int trap(vector<int> &nums) {
        if (nums.size() == 0){
            return 0;
        }

        int i = 0;
        int j = nums.size()-1;

        int max_left = nums[i];
        int max_right = nums[j];

        int total_water = 0;

        while(i < j){
            if (max_left < max_right){
                i++;
                max_left = max(nums[i], max_left);
                total_water += max_left-nums[i];
            }
            else{
                j--;
                max_right = max(max_right, nums[j]);
                total_water += max_right-nums[j];
            }

        }
        
        return total_water;
        
    }
};
