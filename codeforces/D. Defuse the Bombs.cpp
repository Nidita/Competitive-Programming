#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll arr[100005];
ll mx=0;
int ok(ll mid)
{
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mid)
        {
            sum+=mid-arr[i];
        }
    }
    if(sum<=mid)
    {
        return 1;
    }
    else{
        return 0;
    }
}
ll bs(ll l,ll h)
{
    ll mid,ans;
    while(l<=h)
    {


    mid=(l+h)/2;
    //cout<<l<<' '<<h<<' '<<mid<<endl;
    if(ok(mid))
    {
            ans=mid;
        l=mid+1;
    }
    else
    {
       h=mid-1;
    }
    }
    return ans+1;
}


int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);

        }
          cout<< "Case #"<<j++<<": "<<bs(0,n*mx)<<endl;
    }
}
