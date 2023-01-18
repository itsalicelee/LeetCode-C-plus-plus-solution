class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(std::find(nums.begin(), nums.end(), target) == nums.end()){
            nums.push_back(target);
            std::sort(nums.begin(), nums.end());
        }
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start + end) / 2;
        while(start <= end){
            mid = (start + end) / 2;
            if(nums[start] == target){
                return start;
            }
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){  // search right
                start = mid + 1;
            }
            else if(nums[mid] > target){  // search left
                end = mid - 1;
            }
        }
        return mid;
    }
};
