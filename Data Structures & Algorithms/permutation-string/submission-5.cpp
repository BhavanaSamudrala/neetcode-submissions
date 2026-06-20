class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int i = 0;
        if (s2.size() < s1.size()) return false;

        while(i <= s2.size() - s1.size()){
            string substr = s2.substr(i, s1.size()); 
        
            int x = 0;
            for(int i = 0; i < substr.size(); i++){
                x ^= substr[i] ^ s1[i];
            }

            if (x == 0) return true;

            i ++;
        }

        return false;
    }
};
