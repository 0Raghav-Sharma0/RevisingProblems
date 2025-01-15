class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        if (m == 0) return {}; 
        int n = matrix[0].size();

        vector<int> result;
        int count = 0;
        int totalElements = m * n;

        int minr = 0, maxr = m - 1;
        int minc = 0, maxc = n - 1;

        while (count < totalElements) {
            for (int j = minc; j <= maxc && count < totalElements; j++) {
                result.push_back(matrix[minr][j]);
                count++;
            }
            minr++;

            for (int i = minr; i <= maxr && count < totalElements; i++) {
                result.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;

            for (int j = maxc; j >= minc && count < totalElements; j--) {
                result.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
            for (int i = maxr; i >= minr && count < totalElements; i--) {
                result.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
        }

        return result;
    }
};
