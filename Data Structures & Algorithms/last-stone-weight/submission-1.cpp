class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>> max_heap(stones.begin(), stones.end());
       
        while (max_heap.size() > 1) { 
            int h1 = max_heap.top(); max_heap.pop();
            int prev_size = max_heap.size();

            int h2 = max_heap.top(); max_heap.pop();
            int curr_size = max_heap.size();

            int residual = h1-h2;
            

            if (residual > 0 || curr_size == 0){
                max_heap.push(residual); 
            }
            
        } 


        return max_heap.top();
    }
};
