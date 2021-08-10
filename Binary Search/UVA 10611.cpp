#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,i;
    cin>>m;
    int arr[m];
    for(i=0;i<m;i++)
    {
        cin>>arr[i];
    }
     long long n,p,o;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
       // if(binary_search(arr,arr+m,ara[i]))
       // {
              p=(lower_bound(arr,arr+m,ara[i])-arr)-1;
             o=(upper_bound(arr,arr+m,ara[i])-arr);
             if(p>=0)
             {
                 cout<<arr[p]<<" ";

            }
            else
            {
                 cout<<"X"<<" ";

             }
             if(o<=m-1)
             {
                 cout<<arr[o]<<endl;

            }
            else
             {
                 cout<<"X"<<endl;

             }


       // }
        /*else
        {
            p=(lower_bound(arr,arr+m,ara[i])-arr);
             o=(upper_bound(arr,arr+m,ara[i])-arr);
             if(p>=0)
             {
                 cout<<p<<" ";

             }
             else
             {
                 cout<<"X"<<endl;

             }
             if(o<=m-1)
             {
                 cout<<o<<" ";

             }
             else
             {
                 cout<<"X"<<endl;

             }
        }*/
    }
}
