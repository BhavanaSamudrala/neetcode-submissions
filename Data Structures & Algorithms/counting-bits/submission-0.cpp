class Solution {

public:
    int hammingWeight(uint32_t n) {
        if (n == 0) return 0;
        int count = 0;
        while(n !=0){
            n = n & (n-1);
            count ++;
        }
        
        return count;
    }

public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0; i < n+1; i++){
            result.push_back(hammingWeight(i));
        }

        return result;
    }
};
