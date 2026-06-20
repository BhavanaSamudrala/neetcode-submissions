class Solution {
public:
    // calculates the euclidean distance to origin from a point
    // params: x_cord:int, y_cord: int
    float euclidean_dist(int x1, int y1){

        int x_squared = x1*x1;
        int y_squared = y1*y1;
        return sqrt(x_squared + y_squared);
    }

    // returns k-th closest point to origin
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        // stores the point by the distance to origin in desecending order
        priority_queue< pair< float, pair<int, int> >, vector< pair< float, pair<int, int> > > > max_heap;

        int allowed_size = k;

        for(vector<int> point : points){
            int x1 = point[0];
            int y1 = point[1];
            float dist_to_origin = euclidean_dist(x1, y1);

            max_heap.push(make_pair(dist_to_origin, make_pair(x1, y1)));
   
            if (max_heap.size() > allowed_size){
                max_heap.pop();
            }
            
        }

        vector<vector<int>> result;

        while(!max_heap.empty()){
            pair<int, int> point = max_heap.top().second; 
            result.push_back(vector<int>{point.first, point.second});
            max_heap.pop();
        }

        return result; 
    }
};
