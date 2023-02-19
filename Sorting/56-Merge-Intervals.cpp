class Solution {
public:
   static bool compare(std::vector<int>& a, std::vector<int>& b){
            return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ret;
      
        std::sort(intervals.begin(), intervals.end(), compare);
        
        for(size_t i = 0; i < intervals.size(); ++i){
            if(i == 0){
                ret.push_back(intervals[i]);
            }
            else{  // compare with the last appended element
                if(min(ret.back()[1], intervals[i][1]) - max(ret.back()[0], intervals[i][0]) >= 0){  // overlap, merge intervals
                    ret.back()[1] = max(ret.back()[1], intervals[i][1]);
                }
                else{  // no overlap, append
                    ret.push_back(intervals[i]);
                }
            }
        }
        return ret;
    }
};
