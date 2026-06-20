class Solution {
public:
    long long calcTime(vector<int>& piles, int k ){
        long long hours = 0;
        for(int p : piles){
            hours+= ceil(static_cast<double>(p) / k);
        }
        return hours; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
  
        int max_p = *max_element(piles.begin(), piles.end());
        if (h <= piles.size()) return max_p;
        
        int l = 1;
        int r = max_p;
        int result = max_p;

        while(l <= r){
            int mid = (l + r)/2;

            long long hours = calcTime(piles, mid);
            
            if (hours <= h){
                result = mid;
                r = mid -1;
            } else{
                l = mid + 1;
            }
        }

        return result;
    }
};
