class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> result = image;
        int lastRowIdx = image.size() - 1;
        int lastColIdx = image[0].size() - 1;
        set<pair<int, int>> donePair;
        donePair.insert(make_pair(sr, sc));

        helper(image, result, sr, sc, sr+1, sc, color, lastRowIdx, lastColIdx, donePair);
        helper(image, result, sr, sc, sr-1, sc, color, lastRowIdx, lastColIdx, donePair);
        helper(image, result, sr, sc, sr, sc+1, color, lastRowIdx, lastColIdx, donePair);
        helper(image, result, sr, sc, sr, sc-1, color, lastRowIdx, lastColIdx, donePair);
 
        result[sr][sc] = color;
        

        return result;
    }
    void helper(vector<vector<int>>& image, vector<vector<int>>& result, 
        int sr, int sc, int dr, int dc, int color, int lastRowIdx, int lastColIdx, set<pair<int, int>>donePair){
        pair<int, int> cur = make_pair(dr, dc);
            
        if (dr < 0 || dr > lastRowIdx || dc < 0 || dc > lastColIdx || image[dr][dc] != image[sr][sc]){
            donePair.insert(cur);
            return;
        }
            
        // paint
        if(image[dr][dc] == image[sr][sc] && donePair.find(cur) == donePair.end()){
            donePair.insert(cur);
            result[dr][dc] = color;
            helper(image, result, sr, sc, dr+1, dc, color, lastRowIdx, lastColIdx, donePair);
            helper(image, result, sr, sc, dr, dc+1, color, lastRowIdx, lastColIdx, donePair);
            helper(image, result, sr, sc, dr-1, dc, color, lastRowIdx, lastColIdx, donePair);
            helper(image, result, sr, sc, dr, dc-1, color, lastRowIdx, lastColIdx, donePair);
        }
        else{
            return;
        }
    }
  
};
