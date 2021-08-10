#include <bits/stdc++.h>
#define mod 998244353
#define ll long long
using namespace std;
 int n;
 ll k;
 ll arr[1005];
 ll dp[1005][1005];
 ll c=0;
 map<ll,int>m;
 ll solve (int pos, ll sum)
 {

     if(pos==c)
     {
         if(sum==k)
         {
             return 1;
         }
         return 0;
     }
     if(dp[pos][sum]!=-1)return dp[pos][sum];
     ll val=0;

        val=(val+(solve(pos+1,sum)%mod)%mod)%mod;

         val=(val+(m[arr[pos]]*solve(pos+1,sum+1)%mod)%mod)%mod;

     return dp[pos][sum]=val%mod;
 }
int main()
{

    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
       ll x;
       cin>>x;
       m[x]+=1;
       if(m[x]==1)
       {
           arr[c++]=x;
       }

    }
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,0)<<endl;
}
