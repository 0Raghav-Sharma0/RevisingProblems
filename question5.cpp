class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> v(column, vector<int>(row, 0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0; j<matrix[0].size();j++){
                v[j][i]=matrix[i][j];
            }
        }
        return v;
        
    }
};