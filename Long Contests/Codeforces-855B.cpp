#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,p,q,r;
    cin>>n>>p>>q>>r;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll dp[n][3];
    dp[0][0]=p*a[0];
    for(ll i=1;i<n;i++)
    {
        dp[i][0]=max(dp[i-1][0],p*a[i]);
        //cout<<dp[i-1][0]<<' '<<dp[i][0]<<endl;
    }
    //cout<<"-----"<<endl;
    dp[0][1]=dp[0][0]+q*a[0];
    for(ll i=1;i<n;i++)
    {
        dp[i][1]=max(dp[i-1][1],dp[i][0]+q*a[i]);
       //  cout<<dp[i-1][1]<<' '<<dp[i][1]<<endl;
    }
     //cout<<"-----"<<endl;
    dp[0][2]=dp[0][1]+r*a[0];
    for(ll i=1;i<n;i++)
    {
        dp[i][2]=max(dp[i-1][2],dp[i][1]+r*a[i]);
       // cout<<dp[i-1][2]<<' '<<dp[i][2]<<endl;
    }
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }*/
    cout<<dp[n-1][2]<<endl;
}
