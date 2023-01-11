class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> result;
        for(size_t i = 0; i < nums.size(); ++i){
            int key = target - nums[i];
            if (umap.find(key) != umap.end()){
                result.push_back(i);
                result.push_back(umap[key]);
                return result;
            }
            else{
                umap[nums[i]] = i;
            }
        }
        return result;
    }
};
