class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        if (temperatures.size() == 1){
            return vector<int>{0}; 
        }

        vector<int> result(temperatures.size(), 0);
        stack<pair<int, int>> mystack; 
        mystack.push(make_pair(temperatures[0], 0)); 

        for(int i = 1; i < temperatures.size(); i++){
            int today = temperatures[i]; 
            while(!mystack.empty() && mystack.top().first < today){
                result[mystack.top().second] = i - mystack.top().second;
                mystack.pop();
            }
            mystack.push(make_pair(today, i)); 
        }
        
        return result; 
    }
};

