class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> vals;

        for(int i=0; i< nums.size(); i++){
            auto result = vals.insert(nums[i]);
            if(!result.second){
                return true;
            }
        }
        return false;

    }
};
