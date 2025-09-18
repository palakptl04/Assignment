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
                    sinkIsland(grid, i, j, m, n);
                }
            }
        }
        return islands;
    }

private:
    void sinkIsland(vector<vector<char>>& grid, int i, int j, int m, int n) {
        stack<pair<int,int>> st;
        st.push({i,j});
        grid[i][j] = '0';

        while (!st.empty()) {
            auto [x,y] = st.top(); st.pop();

            if (x > 0 && grid[x-1][y] == '1') {
                grid[x-1][y] = '0';
                st.push({x-1,y});
            }
            if (x < m-1 && grid[x+1][y] == '1') {
                grid[x+1][y] = '0';
                st.push({x+1,y});
            }
            if (y > 0 && grid[x][y-1] == '1') {
                grid[x][y-1] = '0';
                st.push({x,y-1});
            }
            if (y < n-1 && grid[x][y+1] == '1') {
                grid[x][y+1] = '0';
                st.push({x,y+1});
            }
        }
    }
};
