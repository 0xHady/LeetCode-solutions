//solve again later

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int freshLeft = 0;
        int minutes = 0 ;
        for(int i =0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 2)
                    q.push({i,j});
                else if(grid[i][j] == 1)
                    freshLeft++;
            }
        }
        
        
        vector<pair<int,int>> dir(4);
        dir = {{1,0},{0,1},{-1,0},{0,-1}};
        
        while(!q.empty() && freshLeft){
            int size = q.size();
            while(size--){
                auto cur = q.front();
                q.pop();
                for(auto i:dir){
                    int x = cur.first + i.first;
                    int y = cur.second + i.second;
                    if(x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size() && grid[x][y] == 1){
                        grid[x][y] = 2;
                        q.push({x,y});
                        freshLeft--;
                    }
                }
            }
            minutes++;
        }
        if(freshLeft) return -1;
        else return minutes;
        
        
        
    }
};