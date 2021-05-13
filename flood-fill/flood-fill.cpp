class Solution {
public:
    
    void helper(vector<vector<int>>&image,int sr,int sc,int newColor,int source){
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=source)
            return;
        
        image[sr][sc]=newColor;
        
        helper(image,sr-1,sc,newColor,source);
        helper(image,sr+1,sc,newColor,source);
        helper(image,sr,sc+1,newColor,source);
        helper(image,sr,sc-1,newColor,source);
        
    
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        
        helper(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};