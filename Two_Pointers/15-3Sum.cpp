class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        set<vector<int>> s;
        for(int i = 0; i < nums.size(); ++i){
            int low = i + 1;
            int high = nums.size() - 1;
            while(low < high){
                if(nums[low] + nums[i] + nums[high] == 0){
                    s.insert({nums[low], nums[i], nums[high]});
                    ++low;
                    --high;
                }
                else if(nums[low] + nums[i] + nums[high] < 0){  // too small
                    ++low;
                }
                else if(nums[low] + nums[i] + nums[high] > 0){  // too large
                    --high;
                }
            }
        }
        for(auto i : s){
            ret.push_back(i);
        }
        return ret;
    }
};
