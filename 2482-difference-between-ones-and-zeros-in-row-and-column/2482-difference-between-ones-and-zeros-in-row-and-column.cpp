class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> result(rows, vector<int>(cols));

        vector<int> ones_row(rows);
        vector<int> ones_col(cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                ones_row[i] += grid[i][j];
                ones_col[j] += grid[i][j];
            }
        }

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = ones_row[i] + ones_col[j] - (rows - ones_row[i]) - (cols - ones_col[j]);
            }
        }

        return result;
    }
};