class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ret;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());  // sort by start 
        
        if(intervals.size() != 0){
            ret.push_back(intervals[0]);
        }

        for(size_t i = 1; i < intervals.size(); ++i){
            if(min(ret.back()[1], intervals[i][1]) - max(ret.back()[0], intervals[i][0]) >= 0){ 
                // overlap, merge intervals 
                ret.back()[1] = max(intervals[i][1], ret.back()[1]);
            }
            else{
                // no overlap, don't merge intervals
                ret.push_back(intervals[i]);
            }
        }
        return ret;

    }
};
