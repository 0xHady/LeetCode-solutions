int MAX= 0 ;
int cur ;
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        MAX = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                cur = 0;
                dfs(grid,i,j);
                MAX = max(MAX,cur);
            }
        }
        
        return MAX;
    }
    
    void dfs(vector<vector<int>>& grid, int i , int j){
        if( grid[i][j] == 0 ) return ;
        grid[i][j] = 0;
        cur++;
        
        if(i+1 < grid.size())
            dfs(grid,i+1,j);
        
        if(i-1 >= 0)
            dfs(grid,i-1,j);
        
        if(j+1 < grid[i].size())
            dfs(grid,i,j+1);
        
        if(j-1 >= 0)
            dfs(grid,i,j-1);
    }
};