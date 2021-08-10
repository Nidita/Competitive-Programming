#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll>digit;
set<int> s;
int mark[101];

void foo()
{
    for(int i=2;i*i<=100;i++)
    {
        if(mark[i]==0)
        {
            for(int j=i*2;j<=100;j+=i)
                mark[j]=1;
        }
    }
    for(int i=2;i<=100;i++)
        if(mark[i]==0)
            s.insert(i);
}
ll dp[10][2][99][99][2];

ll solve(ll pos , bool is_small,ll sumodd,ll sumeven,bool start)
{

    if(pos>=digit.size())

{
    if(s.find(sumeven-sumodd)!=s.end())return 1;
    return 0;

}
if(dp[pos][is_small][sumodd][sumeven][start]!=-1)
{return dp[pos][is_small][sumodd][sumeven][start];}
ll limit=digit[pos];
if(is_small) limit =9;
ll val=0;
for(ll i=0;i<=limit;i++)
{

if(!((digit.size()-pos-1)&1))
{



    val+=solve(pos+1,(i<digit[pos])|is_small,sumodd+i,sumeven,start|(i!=0));
}
else
{
    val+=solve(pos+1,(i<digit[pos])|is_small,sumodd,sumeven+i,start|(i!=0));
}

}
return dp[pos][is_small][sumodd][sumeven][start]=val;
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
   foo();
    while(c--)
    {



    cin>>a>>b;
    convert(a-1);
    memset(dp,-1,sizeof(dp));
   ll x=solve(0,0,0,0,0);
    digit.clear();
    convert(b);
    memset(dp,-1,sizeof(dp));
   ll y=solve(0,0,0,0,0);
    digit.clear();
    cout<<y-x<<endl;
    }
}



