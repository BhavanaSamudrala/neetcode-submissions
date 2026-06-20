class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // [30,38,30,36,35,40,28]
        // [ 1, 4, 1, 2, 1, 0, 0]
        if (temperatures.size() == 1){
            return vector<int>{0}; 
        }

        vector<int> result(temperatures.size(), 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> todo;
;
        
        for(int i = 0; i<temperatures.size(); i++){
            int today = temperatures[i];
            if (i < temperatures.size()-1 && today < temperatures[i+1]){
                result[i] = 1; 
                while(!todo.empty() && todo.top().first < temperatures[i+1]){
                    int past = todo.top().second; todo.pop();
                    result[past] = i+1-past;
                }
            }
            else{
                todo.push(make_pair(today, i)); 
            }
        }
        
        return result; 
    }
};

