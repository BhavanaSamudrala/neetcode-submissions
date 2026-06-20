class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int reverse_number = 0;

        for(int i =31; i>=0; i--){
            int bit = n & 1;
            reverse_number = reverse_number | (bit << i);
            n = n>>1;
        }
        return reverse_number; 
        
    }
};
