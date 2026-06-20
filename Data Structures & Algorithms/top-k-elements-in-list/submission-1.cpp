class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; //{1:1, 2:4, 23:1, 3:2}
        vector<vector<int>> freq(nums.size()+1); //[[], [], [], [], [], [], [], []]

        for(int num : nums){
            count[num] = 1 + count[num];
        }
        
        for(const auto &c: count){
            freq[c.second].push_back(c.first);
        }

        vector<int> result;
        for(int i = freq.size() - 1; i > 0; --i){
            for(int num: freq[i]){
                result.push_back(num);
                if (result.size() == k){
                    return result;
                }
            }
        }
       
       return result;
    }
};
