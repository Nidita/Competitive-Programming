#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,w;
int dp[1005][1005];
vector<int>a,b;

int solve(int i,int j)
{
    int ans=0;

    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(i==n && m==n)
    {
        return 0;
    }
     if(i==n)
    {
        return m-j;
    }
    if(j==m)
    {
        return n-i;
    }


//cout<<"dhuke"<<' '<<i<<' '<<j<<' '<<ans<<endl;

     ans+=min(solve(i+1,j+1)+(a[i]!=b[j]),min(solve(i+1,j)+1,solve(i,j+1)+1));
     dp[i][j]=ans;
//cout<<"bair"<<' '<<i<<' '<<j<<' '<<ans<<endl;


return dp[i][j];


}


int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
     for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
    }
memset(dp,-1,sizeof(dp));

    cout<<solve(0,0)<<endl;
}

