#include <bits/stdc++.h>
using namespace std;




int main()
{
   long long n,i,s=0,k;
   cin>>n;
   long long arr[n];
   for(i=0;i<n;i++)
   {
       cin>>k;
       s+=k;
       arr[i]=s;
   }
  // sort(arr,arr+n);

   long long m;
   cin>>m;
   long long ara[m];
   for(i=0;i<m;i++)
   {
       cin>>ara[i];

   }
   for(i=0;i<m;i++)
   {
long long l=0,h=n;
       long long index=-1,mid;
    while(1)
    {
        mid=(l+h)/2;
       if(arr[mid]==ara[i])
        {
            index=mid;
            cout<<index+1<<endl;
            break;
        }

      else  if(arr[mid]<ara[i])
        {
            l=mid+1;
        }
        else  if(arr[mid]>ara[i])
        {
            h=mid-1;
        }
    /*  else if(arr[mid]==ara[i])
        {
            index=mid;
            cout<<index<<endl;
            break;
        }*/
    if(l>h)
        {
            cout<<l+1<<endl;
            break;
        }

    }
  //  cout<<l+1<<endl;
   }
}
