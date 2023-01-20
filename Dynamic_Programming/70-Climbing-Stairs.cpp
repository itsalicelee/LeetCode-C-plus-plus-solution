class Solution {
public:
    int climbStairs(int n) {
        int a = 0;
        int b = 1;
        int next = 0;
        for(size_t i = 0; i <= n; ++i){
            next = a + b;
            b = a;
            a = next;            
        }
        return next;
        
        // }
        // TLE
        // if(n <= 1){
        //     return 1;
        // }
        // return climbStairs(n-1) + climbStairs(n-2);
    }
};
