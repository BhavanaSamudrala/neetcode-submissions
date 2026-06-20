class Solution {
public:
    int maxArea(vector<int>& nums) {
        int max_area = 0;
        int i = 0;
        int j = nums.size()-1;

        while(i<j){
            int width = j - i;
            int height = min(nums[i], nums[j]);
            int curr_area = height*width; 
            cout << " width: " << width << ", height: " << height << ", area: " << curr_area << endl;
            max_area = max(curr_area, max_area);

            if (nums[i] < nums[j]){
                i++;
            }
            else if(nums[i] > nums[j]){
                j--;
            }
            else{
                i++; j--;
            }
        }

        return max_area;
        
    }
};
