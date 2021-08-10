#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
ll coin[5]={1,5,10,25,50};
ll make;
ll dp[6][30005];
ll call(ll i, ll amount)
{
    //cout<<i<<" ";


    if(i>=5)
    {
        if(amount==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[i][amount]!=-1)
    {
        return dp[i][amount];
    }
   ll  ret1=0,ret2=0;
    if(amount-coin[i]>=0)
    {
        ret1=call(i,amount-coin[i]);
    }
    ret2=call(i+1,amount);
   // cout<<i<<" ";
  /*  cout<<amount<<" ";
      cout<<i<<" ";
    cout<<ret1<<" ";
    cout<<ret2<<endl;*/

    dp[i][amount]=ret1+ret2;
    return dp[i][amount];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        ll answer=call(0,make);
        if(answer==1)
        {
            cout<<"There is only "<<answer<<" way to produce "<<make<<" cents change."<<endl;
        }
        else
        {
            cout<<"There are "<<answer<<" ways to produce "<<make<<" cents change."<<endl;
        }
    }
}
