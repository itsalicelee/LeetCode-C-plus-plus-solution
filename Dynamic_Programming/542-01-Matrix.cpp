class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int rows = mat.size();
        if(rows == 0){
            return mat;
        }
        int cols = mat[0].size();
        vector<vector<int>> ret (rows, vector<int>(cols, INT_MAX - 100000));  // initialize ret of size rows, each row contains a vector of size cols with value INT_MAX

        // check for left and top
        for(size_t i = 0; i < rows; ++i){
            for(size_t j = 0; j < mat[i].size(); ++j){
                if(mat[i][j] == 0){
                    ret[i][j] = 0;
                }
                else{
                    if(i != 0){  // left
                        ret[i][j] = min(ret[i][j], ret[i - 1][j] + 1);
                    }
                    if(j != 0){  // top
                        ret[i][j] = min(ret[i][j], ret[i][j - 1] + 1);
                    }
                }
            }
        }

        // check for right and bottom
        for(int i = rows - 1; i >= 0; --i){
            for(int j = mat[i].size() - 1; j >= 0; --j){
                if(mat[i][j] == 0){
                    ret[i][j] = 0;
                }
                else{
                    if(i != rows - 1){  // bottom
                        ret[i][j] = min(ret[i][j], ret[i + 1][j] + 1);
                    }
                    if(j != mat[i].size() - 1){  // right
                        ret[i][j] = min(ret[i][j], ret[i][j + 1] + 1);
                    }
                }
            }
        }
        return ret;
    }
};
