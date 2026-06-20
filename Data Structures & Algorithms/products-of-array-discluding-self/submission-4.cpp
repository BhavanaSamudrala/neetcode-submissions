class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool has_one_zero = false;
        bool has_more_than_one_zero = false;
        int product = 1;

        for(int num: nums){
            if(num == 0 && has_one_zero){
                has_more_than_one_zero = true;
                break;
            }
            else if(num == 0){
                has_one_zero = true;
            }
            else{
                product *= num;
            }
        }

        if (has_more_than_one_zero){
            vector<int> result (nums.size(), 0);
            return result;
        }

        vector<int> result (nums.size(), product);

        if(has_one_zero){
            vector<int> new_result (nums.size(), 0);
            result = new_result;
        }
    
        
        for (int i=0; i < nums.size(); i++){
            if (has_one_zero){
                if (nums[i] == 0){
                    result[i] = product;
                }
            }
            else{
                result[i] /= nums[i];
            }
        }

        return result;
    }
};
