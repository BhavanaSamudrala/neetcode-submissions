class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;

        for(int i = digits.size()-1; i>=0; i--){
            if (i == digits.size()-1 && digits[i]+1 < 10){
                digits[i] += 1;
                break;
            } else if (i == digits.size()-1 && digits[i]+1 >= 10){
                digits[i] = 0;
                carry = 1;
            }
            else if (digits[i]+carry < 10){
                digits[i] += carry;
                carry = 0;
                break;
            } else{
                digits[i] = 0;
                carry = 1;
            }
        }
        if (carry > 0){
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
