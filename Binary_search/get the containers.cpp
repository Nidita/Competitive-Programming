#include <bits/stdc++.h>
using namespace std;
long long m,n,arr[1001];

int possible(long long mid)
{
    long long temp=0,cnt=1;
    for(int i=0;i<n;i++)
    {
        if(temp+arr[i]<=mid)
        {
            temp+=arr[i];
        }
        else
        {
            temp=arr[i];
            cnt++;

        }
    }
    if(cnt>m)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
long long bs(long long low,long long high)
{
    long long mid,ans;
    while(low<=high)
    {
        mid=(low+high)/2;
       // cout<<low<<' '<<high<<' '<<mid<<endl;
        if(possible(mid)==1)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;

}
int main()
{
    int t,o=1;
    cin>>t;
    while(t--)
    {
        long long low=0,total=0,ans=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            low=max(low,arr[i]);
            total+=arr[i];
        }
        ans=bs(low,total);
        cout<<"Case "<<o++<<": "<<ans<<endl;

    }
}

