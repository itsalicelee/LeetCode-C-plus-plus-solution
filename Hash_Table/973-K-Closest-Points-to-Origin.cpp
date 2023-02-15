# include<iostream>
# include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        if(k == points.size()){
            return points;
        }
        int d = INT_MAX;
        vector<int> distance;
        std::multimap<int, int> m;  // distance -> index
        for(size_t i = 0; i < points.size(); ++i){
            d = pow(points[i][0], 2) + pow(points[i][1], 2);
            m.insert({d, i});
        }
        vector<vector<int>> ret;
        for(auto i = m.begin(); i != m.end(); ++i){
            if(ret.size() < k){
                ret.push_back(points[i->second]);
            }
            else{
                break;
            }
        }
        return ret;
    }
};
