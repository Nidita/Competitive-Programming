
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>digit;
vector<ll>powz;
ll k;
ll dp[12][2][99][99];

ll solve(ll pos , bool is_small,ll sum,ll till_mod)
{

    if(pos>=digit.size())

{
    if(sum%k==0&& till_mod%k==0 && sum>0)return 1;
    return 0;

}
if(dp[pos][is_small][sum][till_mod]!=-1)return dp[pos][is_small][sum][till_mod];
ll limit=digit[pos];
if(is_small) limit =9;
ll val=0;
for(ll i=0;i<=limit;i++)
{
    int o=digit.size()-1-pos;
    val+=solve(pos+1,(i<digit[pos])|is_small,sum+i,((till_mod%k)+(i*powz[o])%k)%k);
}
return dp[pos][is_small][sum][till_mod]=val;
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
    ll a,b,c,z=1,x,y,p=1;
for(ll i=0;i<=11;i++)
{
    powz.push_back(z);
    z*=10;
}
   cin>>c;

    while(c--)
    {



    cin>>a>>b>>k;
    if(a>b)
    {
        swap(a,b);
    }
    convert(a-1);
    memset(dp,-1,sizeof(dp));
    if(digit.size()*9<k)
    {
       x=0;
    }
    else{
   x=solve(0,0,0,0);
    }
    digit.clear();
    convert(b);
     if(digit.size()*9<k)
    {
       y=0;
    }
    else{
   y=solve(0,0,0,0);
    }
    memset(dp,-1,sizeof(dp));
    y=solve(0,0,0,0);
    digit.clear();
    cout<<"Case "<<p++<<": "<<y-x<<endl;
    }
}

