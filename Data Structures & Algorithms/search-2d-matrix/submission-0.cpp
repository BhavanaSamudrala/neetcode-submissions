class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> one_dim_array;
        for(vector<int> nums: matrix){
            for(int num: nums){
                one_dim_array.push_back(num);
            }
        }
        




        int left = 0;
        int right = one_dim_array.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if (one_dim_array[mid] == target){
                return true;
            }
            else if (one_dim_array[mid] < target){
                left = mid+1;
            }
            else{
                right = mid-1; 
            }
        }

        return false;
    }
};
