#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>digit;
ll dp[35][2][35][2];
ll solve(ll pos , bool is_small,ll sum,ll prev)
{

    if(pos>=digit.size())

{
    return sum;


}
if(dp[pos][is_small][sum][prev]!=-1)return dp[pos][is_small][sum][prev];
ll limit=digit[pos];
if(is_small) limit =1;
ll val=0;
for(ll i=0;i<=limit;i++)
{
    val+=solve(pos+1,(i<digit[pos])|is_small,sum+(prev&i),i );
}
return dp[pos][is_small][sum][prev]=val;
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
    ll a,t,j=1;

 cin>>t;
    while(t--)
    {



    cin>>a;
    convert(a);
    memset(dp,-1,sizeof(dp));
    cout<<"Case "<<j++<<": "<<solve(0,0,0,0)<<endl;
    digit.clear();
    }
}

