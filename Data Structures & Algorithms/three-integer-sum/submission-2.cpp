class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> solution; 

        for(int i=0; i < nums.size(); i++){
            if (nums[i] > 0) break;
            if (i>0 && nums[i-1] == nums[i]) continue;

            int j = i+1;
            int k = nums.size()-1;
            int target = 0 - nums[i];

            while(k>j){
                if (nums[j] + nums[k] == target){
                    vector<int>val{nums[i], nums[j], nums[k]};
                    solution.push_back(val);
                    j++; k--;
                    while (k>j && nums[j-1] == nums[j]) j++;
                }
                else if(nums[j] + nums[k] > target){
                    k--;
                }
                else{
                    j++;
                }
            }
        }

        return solution;
        
    }
};
