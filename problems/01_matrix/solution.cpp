class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        
        for(int i= 0; i < mat.size() ; i++)
            for(int j = 0 ; j < mat[0].size() ; j++)
                if(mat[i][j] == 0)
                    q.push({i,j});
                else
                    mat[i][j] = -1;
        
        vector<pair<int,int>> direc(4);
        direc = {{0,1},{0,-1},{1,0},{-1,0}};
        while(!q.empty()){
            int size = q.size();
            
                pair<int,int> cell;
                cell = q.front();
                q.pop();
                for(auto i:direc){
                    int x = cell.first+i.first;
                    int y = cell.second+i.second;
                    if(x < mat.size() && x >= 0 && y >= 0 && y < mat[0].size() && mat[x][y] == -1){
                        mat[x][y] = mat[cell.first][cell.second]+1 ;
                        q.push({x,y});
                    }
                }
        }
        return mat;
    }
    
};