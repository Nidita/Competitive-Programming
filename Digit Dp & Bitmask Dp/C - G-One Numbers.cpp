#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>digit;
ll dp[10][2][99];
bool isprime(ll sum)
{
    int p=1;
    if(sum==1)
    {
        return 0;
    }
    for(ll i=2;i*i<=sum;i++)
    {
        if(sum%i==0)
        {
            p=0;
            break;
        }
    }
    if(p==0)
    {
        return 0;
    }
    return 1;
}
ll solve(ll pos , bool is_small,ll sum)
{

    if(pos>=digit.size())

{
    if(isprime(sum))return 1;
    return 0;

}
if(dp[pos][is_small][sum]!=-1)return dp[pos][is_small][sum];
ll limit=digit[pos];
if(is_small) limit =9;
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
        digit.push_back(x%10);
        x/=10;
    }
    reverse(digit.begin(),digit.end());
}
int main()
{
    ll a,b,c;

   cin>>c;
    while(c--)
    {



    cin>>a>>b;
    convert(a-1);
    memset(dp,-1,sizeof(dp));
   ll x=solve(0,0,0);
    digit.clear();
    convert(b);
    memset(dp,-1,sizeof(dp));
   ll y=solve(0,0,0);
    digit.clear();
    cout<<y-x<<endl;
    }
}

