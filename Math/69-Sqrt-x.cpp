class Solution {
public:
    int mySqrt(int x) {
        int result;
        long long int i = 0;
        long long int squared = 0;
        while(squared <= x){
            i++;
            squared = i * i;
        }
       
        return i - 1;
    }
};
