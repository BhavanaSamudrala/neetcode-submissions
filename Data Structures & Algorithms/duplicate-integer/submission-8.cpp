class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> age;

        for(int i=0; i< nums.size(); i++){
            if(age.find(nums[i]) != age.end()){
                return true;
            }
            age[nums[i]] = 1;
        }
        return false;

    }
};
