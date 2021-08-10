#include <bits/stdc++.h>
using namespace std;




int main()
{
   long long n,i;
   cin>>n;
   long long arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);

   long long m;
   cin>>m;
   long long ara[m];
   for(i=0;i<m;i++)
   {
       cin>>ara[i];

   }
   for(i=0;i<m;i++)
   {

    cout<<upper_bound(arr,arr+n,ara[i])-arr<<endl;
   }
}
