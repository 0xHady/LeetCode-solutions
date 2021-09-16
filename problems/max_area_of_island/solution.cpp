#define F first
#define S second
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int MAX = 0;
        for(int i = 0 ; i < grid.size() ; i++)
            for(int j = 0 ; j < grid[i].size() ; j++)
                MAX = max(MAX,dfs(grid,i,j));
        
        return MAX;
    }
    
    int dfs(vector<vector<int>>& grid, int i , int j){
        if(grid[i][j] == 0) return 0 ;
        else grid[i][j] = 0;
        
        int area = 1;
        vector<pair<int,int>> sides(4);
        sides  = {{i+1,j},{i-1,j},{i,j+1},{i,j-1}};
        
        for(auto x:sides)
            if(x.F >= 0 && x.F < grid.size() && x.S >= 0 && x.S < grid[0].size())
                area += dfs(grid,x.F,x.S);
        
        return area;
    }
};