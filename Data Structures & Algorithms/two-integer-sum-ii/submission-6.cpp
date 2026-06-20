class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // [-7, -3, -2, -1, 1, 2, 3, 4, 5]

        int i=0;
        int j=nums.size()-1;

        while (j >= i){
            if (nums[j] + nums[i] == target){
                return vector<int>{i+1, j+1};
            }
            else if(nums[i] + nums[j] > target){
                j--;
            }
            else{
                i++;
            }
        }

        
    }
};
