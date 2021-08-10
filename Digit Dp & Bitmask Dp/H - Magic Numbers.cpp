#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll dp[2005][2][2][2][2005];
vector<ll>digit;
ll m,d;
ll solve(ll pos , bool is_small,bool oddeven,bool start,ll sum)
{

    if(pos>=digit.size())

{
    if(sum%m==0)return 1;
    return 0;

}
if(dp[pos][is_small][oddeven][start][sum]!=-1)return dp[pos][is_small][oddeven][start][sum];
ll limit=digit[pos];
if(is_small) limit =9;
ll val=0;


for(ll i=0;i<=limit;i++)
{

    start=start|(i>0);

       val=(val+solve(pos+1,(i<digit[pos])|is_small,oddeven^start,start,sum+(ll)(oddeven==0 && i==d))%mod)%mod;

}

return dp[pos][is_small][oddeven][start][sum]=val%mod;
}
int main()
{

    cin>>m>>d;
    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<b.size();i++)
    {
        digit.push_back((ll)b[i]-'0');
    }
    ll x=solve(0,0,0,1,0);
     memset(dp,-1,sizeof(dp));
    for(int i=0;i<a.size();i++)
    {
        digit.push_back((ll)a[i]-'0');
    }
    digit[digit.size()-1]-=1;
    ll y=solve(0,0,0,1,0);
    cout<<x-y<<endl;


}
