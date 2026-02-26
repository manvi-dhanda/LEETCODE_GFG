class Solution {
public:
    
    void dfs(vector<vector<int>>& image, int i, int j, int origColor, int newColor) {
        
        int m = image.size();
        int n = image[0].size();
        
        if(i < 0 || j < 0 || i >= m || j >= n)
            return;
        
        if(image[i][j] != origColor)
            return;
        image[i][j] = newColor;
        
        dfs(image, i+1, j, origColor, newColor);
        dfs(image, i-1, j, origColor, newColor);
        dfs(image, i, j+1, origColor, newColor);
        dfs(image, i, j-1, origColor, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int origColor = image[sr][sc];
        if(origColor == color)
            return image;
        
        dfs(image, sr, sc, origColor, color);
        
        return image;
    }
};