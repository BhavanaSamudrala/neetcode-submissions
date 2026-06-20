class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> vals;

        for(int i=0; i< nums.size(); i++){
            if(!vals.insert(nums[i]).second){
                return true;
            }
        }
        return false;

    }
};
