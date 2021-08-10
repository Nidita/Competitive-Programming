#include <bits/stdc++.h>
#define mx 1005
using namespace std;
int dp[mx][mx];
vector<int>adj[mx],cost[mx];
int main()
{
int n,m;
cin>>n>>m;
memset(dp,-1,sizeof(dp));
int mine[n],mxn=0,lose[n];
for(int i=0;i<n;i++)
{
    cin>>mine[i]>>lose[i];
    mxn=max(mxn,mine[i]);

}
for(int i=0;i<m;i++)
{
    int u,v,day;
    cin>>u>>v>>day;
    adj[u-1].push_back(v-1);
     cost[u-1].push_back(day);
      adj[v-1].push_back(u-1);
     cost[v-1].push_back(day);

}
dp[0][0]=mine[0];
int ans=dp[0][0];

for(int i=0;i<mxn;i++)
{

    for(int j=0;j<n;j++)
    {
      if(i==0)
    {
        dp[i][j]=mine[j];
        ans=max(ans,dp[i][j]);
    }

        for(int k=0;k<adj[j].size();j++)
        {
            int c=max(0,mine[adj[j][k]]-((i+cost[j][k])*lose[adj[j][k]]));
            dp[i+cost[j][k]][adj[j][k]]=max(  dp[i+cost[j][k]][adj[j][k]],dp[i][j]+c);
            ans=max(ans,  dp[i+cost[j][k]][adj[j][k]]);
        }
    }
}
cout<<ans<<endl;


}

