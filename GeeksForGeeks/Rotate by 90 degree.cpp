void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int row=matrix.size();
    int col = matrix[0].size();

    for(int i=0;i<row;i++)
    {
        for(int j=i+1;j<row;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int i=0;i<row;i++)
    {
        int low=0;
        int end=row-1;

        while(low<end)
        {
            swap(matrix[low][i], matrix[end][i]);
            low++;
            end--;
        }
    }

}
