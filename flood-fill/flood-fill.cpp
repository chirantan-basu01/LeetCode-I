class Solution {
public:
    void DFS(int sr,int sc,int m,int n,int newColor,vector<vector<int>>& image,int target){
        //out of bounds conditions
        if(sr<0 || sc<0 || sr>=m || sc>=n || image[sr][sc]==newColor || image[sr][sc]!=target)
            return;
        
        image[sr][sc]=newColor;
        
        DFS(sr+1,sc,m,n,newColor,image,target);
        DFS(sr-1,sc,m,n,newColor,image,target);
        DFS(sr,sc+1,m,n,newColor,image,target);
        DFS(sr,sc-1,m,n,newColor,image,target);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size();
        int n=image[0].size();
        
            DFS(sr,sc,m,n,newColor,image,image[sr][sc]);
        return image;
    }
};