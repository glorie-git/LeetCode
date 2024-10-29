class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> dp(rows, vector<int>(cols, 0));

        for (int col = cols - 1; col >= 0; --col) {
            for (int row = 0; row < rows; ++row) {
                int currentValue = grid[row][col];
                if (row > 0 && col < cols - 1 && grid[row - 1][col + 1] > currentValue) {
                    dp[row][col] = max(dp[row][col], 1 + dp[row - 1][col + 1]);
                }
                if (col < cols - 1 && grid[row][col + 1] > currentValue) {
                    dp[row][col] = max(dp[row][col], 1 + dp[row][col + 1]);
                }
                if (row < rows - 1 && col < cols - 1 && grid[row + 1][col + 1] > currentValue) {
                    dp[row][col] = max(dp[row][col], 1 + dp[row + 1][col + 1]);
                }
            }
        }

        int maxMovesCount = 0;
        for (int row = 0; row < rows; ++row) {
            maxMovesCount = max(maxMovesCount, dp[row][0]);
        }

        return maxMovesCount;
    }
};
