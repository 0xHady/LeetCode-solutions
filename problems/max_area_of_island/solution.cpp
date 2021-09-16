class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int MAX = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                MAX = max(MAX,dfs(grid,i,j));
            }
        }
        
        return MAX;
    }
    
    int dfs(vector<vector<int>>& grid, int i , int j){
        if( grid[i][j] == 0 ) return 0 ;
        grid[i][j] = 0;
        int cur = 1;
        vector<pair<int,int>> v(4);
        v  = {{i+1,j},{i-1,j},{i,j+1},{i,j-1}};
        
        for(auto x:v)
            if(x.first >= 0 && x.first < grid.size() && x.second >= 0 && x.second < grid[0].size())
                cur += dfs(grid,x.first,x.second);
        return cur;
        
    }
};