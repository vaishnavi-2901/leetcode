/*
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
*/


/* solution: here i am using dfs approach by assuming a 2D matrix as undirected graph.
first, traversing the whole matrix from (0,0) to (m,n) to get first 1
as soon as i am getting first 1, i will trigger dfs to track all the neighbours and mark those nodes as visited, along with incrementing our ans by 1
as we will find all the land and convert those into 0, so that we will not get ourselves in infinite loop
*/

/*
DFS: here we have implemented DFS as recursive DFS to check if any adjacent cell has 1 left, if not, we will get out of loop, and get our island
*/
class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c){
        int nr = grid.size();
        int nc = grid[0].size();
        grid[r][c] = '0'; //marked as visited
        if(r-1>=0 && grid[r-1][c]=='1') dfs(grid, r-1, c);
        if(c-1>=0 && grid[r][c-1]=='1') dfs(grid, r, c-1);
        if(r+1<nr && grid[r+1][c]=='1') dfs(grid, r+1, c);
        if(c+1<nc && grid[r][c+1]=='1') dfs(grid, r, c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int nr = grid.size();
        int nc = grid[0].size();
        int ans = 0;
        for(int r=0;r<nr;r++){
            for(int c=0;c<nc;c++){
                if(grid[r][c]=='1'){
                    dfs(grid,r,c);
                    ++ans;
                }
            }
        }
        return ans;
    }
};
