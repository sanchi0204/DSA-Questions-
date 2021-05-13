class solution
{
public:
   void sort012(int a[], int n)
   {

          int low=0, high=n-1, mid=0;

   while(mid<=high)
   {
       switch(a[mid])
       {
           case 0: swap(a[low],a[mid]);
                   mid++;
                   low++;
                   break;

           case 1: mid++;
                   break;

           case 2: swap(a[mid],a[high]);
                   high--;
                   break;
       }
   }
   }

};
