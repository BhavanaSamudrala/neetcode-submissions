class Solution {
public:

    string encode(vector<string>& strs) {
        string delimeter = "a\t";
        string str = "";
        for(int i=0; i<strs.size(); i++){
            str += strs[i] +delimeter;
        }
        str += delimeter;
        return str;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string delimeter = "a\t";

        string str = "";
        for(int i=0; i<s.size()-delimeter.size(); i++){
            string sub_str = s.substr(i, delimeter.size());
            str += s[i];
            if (sub_str == delimeter){
                result.push_back(str.substr(0, str.size()-1)); //##
                str = "";
                i = i+delimeter.size()-1; //##
            }
        }
        return result;
    }
};
