class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color,int original){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size()){return;}
        if(image[i][j]!=original){
            return;
        }
        image[i][j]=color;
        dfs(image,i+1,j,color,original);
        dfs(image,i,j+1,color,original);
        dfs(image,i,j-1,color,original);
        dfs(image,i-1,j,color,original);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original = image[sr][sc];

        if(original == color)  
            return image;

        dfs(image,sr,sc,color,original);

        return image;
    }
};