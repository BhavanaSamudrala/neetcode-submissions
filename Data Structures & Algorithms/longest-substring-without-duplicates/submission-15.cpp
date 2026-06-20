class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s==""){
            return 0;
        }
        int chrs[75] = {};
        int max_length = 1;
        
        int i=0;
        int j=1;

        chrs[s[i]-'0'] = 1;


        while(j < s.size()){
            if (chrs[s[j] - '0'] == 0){
                chrs[s[j] - '0'] = 1; 
                 j++;
                max_length = max(max_length, j-i);
            }
            else{
                chrs[s[i]-'0'] = 0;
                i++;
            }
        }

        

        return max_length;
    }
};
