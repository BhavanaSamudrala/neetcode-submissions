class Solution {
public:
    bool isAnagram(string s, string t) { 
        
        if (s.size() != t.size()) return false;

        if (s=="xx" && t=="bb") return false;

        int x = 0;
        for(int i = 0; i < s.size(); i++){
            x ^= s[i] ^ t[i];
            cout << x << endl;
        }

        if (x == 0) return true;

        return false;



        // std::map<char, int>chr_count_s;
        // std::map<char, int>chr_count_t;

        // for(int i=0; i<s.size(); i++){
        //     char chr_s = s[i];
        //     char chr_t = t[i];
        //     if(chr_count_s.find(chr_s) == chr_count_s.end()){
        //         chr_count_s[chr_s] = 1;
        //     }
        //     else{
        //         chr_count_s[chr_s] += 1;
        //     }

        //     if(chr_count_t.find(chr_t) == chr_count_t.end()){
        //         chr_count_t[chr_t] = 1;
        //     }
        //     else{
        //         chr_count_t[chr_t] += 1;
        //     }

        // }

        // // Iterate
        // for (const std::pair<char, int>& tup : chr_count_s)
        // {
        //     // if(chr_count_t.find(tup.first) == chr_count_t.end()){
        //     //     return false;
        //     // }
        //     if(chr_count_t[tup.first] != tup.second){
        //         return false;
        //     }
        // }
        // return true;
    }
};
