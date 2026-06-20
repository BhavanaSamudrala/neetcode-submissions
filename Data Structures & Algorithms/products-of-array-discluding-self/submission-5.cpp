class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1); 

        int prefix = 1;

        // [1, 2, 2*3, 2*3*5, 2*3*5*4]
        // [2, 3, 5, 4, 6]

        for(int i=0; i<nums.size()-1; i++){
            int num = nums[i]; // 2, 3, 5, 4
            prefix *= num;  // 2, 2*3, 2*3*5, 2*3*5*4
            result[i+1] = prefix; // . . . .
        }

        int postfix = 1;

        // [3*5*4*6, 2*5*4*6, 2*3*4*6, 2*3*5*6, 2*3*5*4]
        // [2, 3, 5, 4, 6]

        for(int i= nums.size()-1; i > 0; i--){
            int num = nums[i]; // 6, 4, 5 3
            postfix *= num;  // 6, 4*6 5*4*6 3*5*4*6
            result[i-1] *= postfix; // . . . .
        }
        
        return result;
    }
};
