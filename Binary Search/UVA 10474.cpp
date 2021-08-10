#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j=1;
    while(1)
    {
       cin>>n>>m;
       if(n==0 && m==0)
       {
           break;
       }

       int arr[n];
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int ara[m];
        for(i=0;i<m;i++)
       {
           cin>>ara[i];
       }

       sort(arr,arr+n);
       cout<<"CASE# "<<j<<":"<<endl;
       j++;
        for(i=0;i<m;i++)
       {



       if(binary_search(arr,arr+n,ara[i]))
       {
           cout<<ara[i]<<" found at "<<(lower_bound(arr,arr+n,ara[i])-arr)+1<<endl;
       }
       else
       {
           cout<<ara[i]<<" not found"<<endl;
       }
       }
    }
}

