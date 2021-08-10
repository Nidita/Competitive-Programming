#include <bits/stdc++.h>
using namespace std;




int main()
{
   long long n,i,s=0,k,m,f;
   cin>>n>>m;
   long long arr[n];
   for(i=0;i<n;i++)
   {
       cin>>k;
       s+=k;
       arr[i]=s;
   }
  // sort(arr,arr+n);


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
            if(index==0)
            {
                f=0;
                 cout<<index+1<<" "<<ara[i]<<endl;
            }
            else
            {
                f=index;
                cout<<index+1<<" "<<ara[i]-arr[f-1]<<endl;
            }

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
             if(l==0)
            {
                f=0;
                  cout<<l+1<<" "<<ara[i]<<endl;
            }
            else
            {
                f=l-1;
               cout<<l+1<<" "<<ara[i]-arr[f]<<endl;
            }
            break;
        }

    }
  //  cout<<l+1<<endl;
   }
}
