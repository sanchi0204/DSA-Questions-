class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
       int start=-1,end=-1;

       vector<int> v;

       for(int i=0;i<n;i++)
       {
           if(a[i]==key)
            {
                start=i;
                v.push_back(start);
                break;
            }

       }

       if(start==-1)
          {
               v.push_back(-1);
                v.push_back(-1);
          }

    end=start;

    for(int i=n-1;i>=start;i--)
    {
        if(a[i]==key)
        {
            end=i;
               v.push_back(end);
            break;
        }


    }

    return v;

    }

};
