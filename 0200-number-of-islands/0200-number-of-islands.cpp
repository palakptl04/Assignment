#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if (m == 0) return 0;
        int n = grid[0].size();

        int islands = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    dfs(grid, i, j, m, n);
                }
            }
        }
        return islands;
    }

private:
    void dfs(vector<vector<char>>& grid, int i, int j, int m, int n) {
        // Boundary check + water check
        if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
            return;

        grid[i][j] = '0'; // mark as visited (sink the land)

        // Explore 4 directions
        dfs(grid, i + 1, j, m, n);
        dfs(grid, i - 1, j, m, n);
        dfs(grid, i, j + 1, m, n);
        dfs(grid, i, j - 1, m, n);
    }
};
