#include <bits/stdc++.h>
#define ll long long
#define mod  1000000009
using namespace std;
ll b,k;
vector<int>p;
void foo()
{ ll s=1;
    for(int i=0;i<128+5;i++)
    {
       p.push_back(s%k);
        s=(s*2)%k;
    }
}
ll dp[128+5][1005][128+5];
ll solve(ll pos ,ll mul_k, ll sum)
{

    if(pos==-1)

{
    if(mul_k%k==0)return sum%mod;
    return 0;

}
if(dp[pos][mul_k][sum]!=-1)return dp[pos][mul_k][sum]%mod;

ll val=0;
for(ll i=0;i<=1;i++)
{
    val=((val%mod)+(solve(pos-1,((mul_k%k)+(i*p[pos]%k))%k,sum+i)%mod))%mod;
}
return dp[pos][mul_k][sum]=val%mod;
}

int main()
{

/*for(int i=0;i<p.size();i++)
{
    cout<<p[i]<<' ';
}
cout<<endl;
*/
    cin>>k>>b;
    foo();
    memset(dp,-1,sizeof(dp));
    cout<<solve(b-1,0,0)<<endl;


}

