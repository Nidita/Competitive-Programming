#include<bits/stdc++.h>
#define mod 2147483647
#define pii pair<int,int>
#define mx 1005
#define MOD 2147483647
using namespace std;
int vis[mx][mx];
int dx1[]={0,0,1,-1};
int dy1[]={1,-1,0,0};
int n;
 string s[mx];

void bfs()
{
    queue<pii>q;
    q.push(make_pair(0,0));
    while(!q.empty())
    {
        pii u=q.front();
        q.pop();
        int x,y,x1,y1;
        x=u.first;
        y=u.second;
        vis[x][y]=1;
        for(int i=0;i<4;i++)
        {
            x1=x+dx1[i];
            y1=y+dy1[i];

            if(vis[x1][y1]==0&& s[x1][y1]!='#' && x1>=0 && x1<n && y1>=0 && y1<n)
            {
               //level[x1][y1]=(level[x][y]%mod+1)%mod;
               vis[x1][y1]=1;
               q.push(make_pair(x1,y1));

            }

        }


    }
}
int main()
{
     cin>>n;

    for(int i=0; i<n; i++)cin>>s[i];
    int dp[n+2][n+2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0 && j==0)
            {
                if(s[i][j]=='#')dp[i][j] = 0;
                else dp[i][j] = 1;
            }
            else if(s[i][j]=='.')
            {
                if(i==0)dp[i][j] = (dp[i][j-1])%MOD;
                else if(j==0)dp[i][j] = (dp[i-1][j])%MOD;
                else
                {
                    dp[i][j] = (dp[i-1][j]%MOD+ dp[i][j-1]%MOD)%MOD;
                }
            }
            else dp[i][j] = 0;
        }
    }

    if(dp[n-1][n-1]==0)
    {
        memset(vis,0,sizeof(vis));
        bfs();
        if(vis[n-1][n-1]==1)
        {
            cout<<"THE GAME IS A LIE"<<endl;
        }
        else
        {
            cout<<"INCONCEIVABLE"<<endl;
        }
    }
    else
    {
        cout<<dp[n-1][n-1]<<endl;
    }
    return 0;
}

