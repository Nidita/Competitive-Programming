#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll k;
vector<ll>digit;
ll dp[60][2][60];
ll solve(ll pos , bool is_small,ll sum)
{

    if(pos>=digit.size())

{
    if(sum%k==0)return 1;
    return 0;

}
if(dp[pos][is_small][sum]!=-1)return dp[pos][is_small][sum];
ll limit=digit[pos];
if(is_small) limit =1;
ll val=0;
for(ll i=0;i<=limit;i++)
{
    val+=solve(pos+1,(i<digit[pos])|is_small,sum+i);
}
return dp[pos][is_small][sum]=val;
}
void convert(ll x)
{
    while(x)
    {
        digit.push_back(x%2);
        x/=2;
    }
    reverse(digit.begin(),digit.end());
}
int main()
{
    ll a;

    k=3;
    while(cin>>a)
    {



    //cin>>a;
    convert(a);
    memset(dp,-1,sizeof(dp));
    cout<<"Day "<<a<<": Level = "<<solve(0,0,0)-1<<endl;
    digit.clear();
    }
}
