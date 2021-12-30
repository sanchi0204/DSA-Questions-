#include <iostream>
using namespace std;

void reverseArray(int a[], int low, int high)
{
    int temp;

    while(low<high)
    {
        temp=a[low];
        a[low]=a[high];
        a[high]=temp;

        low++;
        high--;
    }

}
int main() {
	//code
	int t;
	cin>>t;

	while(t--)
	{
	    int n,d;
	    cin>>n>>d;

	    int a[n];

	    for(int i=0;i<n;i++)
	        {
	            cin>>a[i];
	        }

	        reverseArray(a,0,d-1);
	        reverseArray(a,d,n-1);
	        reverseArray(a,0,n-1);

	        for(int i=0;i<n;i++)
	            cout<<a[i]<<" ";

	   cout<<endl;
	}
	return 0;
}
