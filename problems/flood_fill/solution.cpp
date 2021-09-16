class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        dfs(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int old, int newColor){
        if(sr >= image.size() || 
           sc >= image[0].size() || 
           sr < 0 || 
           sc < 0 || 
           image[sr][sc] != old) return ;
        
        image[sr][sc] = newColor;
        dfs(image,sr+1,sc,old,newColor);
        dfs(image,sr-1,sc,old,newColor);
        dfs(image,sr,sc+1,old,newColor);
        dfs(image,sr,sc-1,old,newColor);
    }
};