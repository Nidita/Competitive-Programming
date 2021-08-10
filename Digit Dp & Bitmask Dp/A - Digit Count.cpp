#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll numDigit;
int m;
vector<ll>digit;
ll dp[12][12];
ll solve(ll pos , bool prev_num)
{



if(dp[pos][prev_num]!=-1)return dp[pos][prev_num];
if(pos==numDigit)

{
    return 1;



}

ll val=0;
for(int i=0;i<m;i++)
{

    if((abs(digit[i]-prev_num)<=2 )|| prev_num==0)
    {


    val+=solve(pos+1,digit[i]);
    }



}
return dp[pos][prev_num]=val;
}
/*void convert(ll x)
{
    while(x)
    {
        digit.push_back(x%2);
        x/=2;
    }
    reverse(digit.begin(),digit.end());
}
*/
int main()
{
   ll t;
   cin>>t;
    while(t--)
    {

cin>>m>>numDigit;
for(int i=0;i<m;i++)
{
    ll k;
    cin>>k;
    digit.push_back(k);
}


    memset(dp,-1,sizeof(dp));

   cout<<solve(0,0)<<endl;
    digit.clear();
    }
}

