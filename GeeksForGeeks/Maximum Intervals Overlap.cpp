class Solution{

	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here

	   sort(Entry, Entry+N);
	   sort(Exit, Exit+N);

	   int i=1, j=0,curr=1,res=1,t=0;

	   while(i<N && j<N)
	   {
	       if(Entry[i]<=Exit[j])
	       {

	           curr++;

	            if(curr>res)
	       {
	           res=curr;
	           t=i;
	       }

	       i++;

	       }

	       else
	       {
	           curr--;
	           j++;
	       }


	   }

	   vector<int> ans;
	   ans.push_back(res);
	   ans.push_back(Entry[t]);

	   return ans;
	}

};
