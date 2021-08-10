#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int h,w;
    ll mn=-1,sum=0;
    cin>>h>>w;
    ll arr[h][w];
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++ )
        {
            cin>>arr[i][j];
            if(mn==-1)
            {
                mn=arr[i][j];
            }
            else
            {
                mn=min(mn,arr[i][j]);
            }
        }
    }
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++ )
        {
           sum+=arr[i][j]-mn;

        }
    }
    cout<<sum<<endl;
}
