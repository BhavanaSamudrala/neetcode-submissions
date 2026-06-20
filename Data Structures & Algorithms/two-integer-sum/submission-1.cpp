class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> val_idx; 

        for(int i=0; i<nums.size(); i++){
            int val = nums[i];
            int second_val = target - val;

            if(val_idx.find(second_val) != val_idx.end()){
                return vector<int>{val_idx[second_val], i};
            }
            else{
                val_idx[val] = i;
            }
        }

    }
};
