class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size()-1;
        
        while(begin <= end){
            int gap = (end-begin)/2;
            int mid = begin + gap;
            if(nums[mid] == target){            
                return mid;
            }
            else if(nums[mid] < target){  // search right half
                begin = mid + 1;
            }
            else if(nums[mid] > target){  // search left half
                end = mid - 1;
            }
        }
        return -1;
    }
};
