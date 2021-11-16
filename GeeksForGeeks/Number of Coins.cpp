Solution{

	public:
	int minCoins(int coins[], int M, int V)
	{
	    // Your code goes here
	    int t[M+1][V+1];

	    for(int i=0;i<M+1;i++)
	    {
	        for(int j=0;j<V+1;j++)
	        {
	            if(i==0)
	                t[i][j]=INT_MAX-1;

	           if(j==0)
	            t[i][j]=0;
	        }
	    }

	    for(int j=1;j<V+1;j++)
	        {
	            if(j%coins[0]==0)
	                t[1][j]=j/coins[0];

	           else
	            t[1][j]=INT_MAX-1;
	        }

	        for(int i=2;i<M+1;i++)
	        {
	            for(int j=1;j<V+1;j++)
	            {
	                if(coins[i-1]<=j)
	                    t[i][j]=min(t[i-1][j], t[i][j-coins[i-1]]+1);

	               else
	                t[i][j]=t[i-1][j];
	            }
	        }

	   if(t[M][V]==INT_MAX-1)
	    return -1;

	   return t[M][V];
	}

};
