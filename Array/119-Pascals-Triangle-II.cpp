class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ret;
        for(int i = 0; i <= rowIndex; ++i){
            vector<int> row = {};
            for(int j = 0; j <= i; ++j){
                if(j == 0 || j == i || i == 0){
                    row.push_back(1);
                }
                else{
                    row.push_back(ret[i-1][j-1] + ret[i-1][j]);
                }
                
            }
            ret.push_back(row);
        }
        return ret[rowIndex];
    }
};
