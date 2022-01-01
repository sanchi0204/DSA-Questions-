int matSearch (int N, int M, int m[][M], int x)
{
    int row=0;
    int col=M-1;

    if(m[0][0]>x || m[N-1][M-1]<x)
        return 0;

    int low=0;
    int high=M-1;

    while(row<N && col>=0)
{
    if(m[row][col]==x)
        return 1;

    else if(m[row][col]>x)
        col--;

    else if(m[row][col]<x)
        row++;
}

return 0;
}
