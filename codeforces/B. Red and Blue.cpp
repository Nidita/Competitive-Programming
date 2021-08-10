#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>m;
        int brr[m];
        for(int i=0;i<m;i++)
        {
            cin>>brr[i];
        }
        int mx=0,mf=0,mf1=0;
        for(int i=0;i<n;i++)
        {
            mx+=arr[i];

             if(mf<mx)
            {
                mf=mx;
            }
        }
        mx=0;
        for(int i=0;i<m;i++)
        {
            mx+=brr[i];

             if(mf1<mx)
            {
                mf1=mx;
            }
        }
       cout<<max(0,mf+mf1)<<endl;

    }
}
