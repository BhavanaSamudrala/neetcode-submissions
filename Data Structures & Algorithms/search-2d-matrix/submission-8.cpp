class Solution {
public:
    bool binarySearch(vector<int>& list, int target){
        int left = 0;
        int right = list.size()-1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if(list[mid] == target){
                return true;
            }
            else if (target < list[mid]){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 1){
            return binarySearch(matrix[0], target);
        }
        int top_row = 0;
        int bottom_row = matrix.size()-1;
        
        int i = 0;
        while(top_row <= bottom_row){
            int mid_row = top_row + (bottom_row - top_row) / 2;
            int col_size = matrix[mid_row].size()-1;
            if(matrix[mid_row][0] <= target && matrix[mid_row][col_size] >= target){
                return binarySearch(matrix[mid_row], target);
                // cout << "hi";
                // break;
            }
            else if(matrix[mid_row][0] > target){
                bottom_row = mid_row - 1;
            }
            else{
                top_row = mid_row + 1;
            }
            cout << mid_row << endl;

            
        }

        return false;
    }
};
