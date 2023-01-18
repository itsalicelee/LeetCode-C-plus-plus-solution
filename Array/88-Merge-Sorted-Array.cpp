class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0){
            return;
        }
        if(m == 0){
            nums1 = nums2;
            return;
        }
        size_t itr1 = 0;
        size_t itr2 = 0;
        vector<int> result;
        while(itr1 < m && itr2 < n){
            if(nums1[itr1] <= nums2[itr2]){
                result.push_back(nums1[itr1]);
                itr1++;
            }
            else{
                result.push_back(nums2[itr2]);
                itr2++;
            }
        }
        while(itr1 != m){
            result.push_back(nums1[itr1]);
            itr1++;
        }
        while(itr2 != n){
            result.push_back(nums2[itr2]);
            itr2++;
        }
        
        nums1 = result;
    }
};
