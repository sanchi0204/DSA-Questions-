class Solution {
public:

void dfs(vector<vector<int>>& image, int x, int y, int newColor, int num,int row, int col)
{
    if(x<0 || x>=row || y<0 || y>=col || image[x][y]==newColor || image[x][y]!=num)
        return;

        image[x][y]=newColor;

    dfs(image,x+1,y,newColor,num,row,col);
    dfs(image,x-1,y,newColor,num,row,col);
    dfs(image,x,y+1,newColor,num,row,col);
    dfs(image,x,y-1,newColor,num,row,col);
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here

        int row=image.size();

        if(row==0)
            return {{}};

        int col = image[0].size();

        int num=image[sr][sc];


        dfs(image,sr,sc,newColor,num,row,col);

        return image;
    }
};
