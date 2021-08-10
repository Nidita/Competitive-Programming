#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  n,k,i,r,s,e;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int m;
        cin>>m;
        int  d=m/2;



       e= lower_bound(arr,arr+n,d)-arr;


      if(binary_search(arr,arr+n,d)){
            k=e;
      i=e;
      }
      else{
    k=e-1;
      i=e-1;
      }
  while(i>=0)
     {
         r=m-arr[i];
         if(binary_search(arr+k+1,arr+n,r))
         {
             s=lower_bound(arr+k+1,arr+n,r)-arr;

             break;
         }
         else
         {
             i--;
         }
     }
  printf("Peter should buy books whose prices are %d and %d.\n",arr[i],arr[s]);
  printf("\n");
    }
}
