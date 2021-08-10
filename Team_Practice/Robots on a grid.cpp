#include <bits/stdc++.h>
#define mod 2147483647
#define pii pair<int,int>
#define mx 1005
using namespace std;
int vis[mx][mx],level[mx][mx];
char c[mx][mx];
int dx[]={0,1};
int dy[]={1,0};
int dx1[]={0,0,1,-1};
int dy1[]={1,-1,0,0};
int n;
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
        for(int i=0;i<2;i++)
        {
            x1=x+dx[i];
            y1=y+dy[i];

                level[x1][y1]=(level[x1][y1]%mod+1)%mod;


            if( c[x1][y1]!='#'&& x1>=0 && x1<n && y1>=0 && y1<n)
            {
               level[x1][y1]=(level[x][y]%mod+1)%mod;
              vis[x1][y1]=1;
                q.push(make_pair(x1,y1));
            }

        }


    }
}
void bfs1()
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

            if(vis[x1][y1]==0&& c[x1][y1]!='#' && x1>=0 && x1<n && y1>=0 && y1<n)
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cin>>c[i][j];
    }
    }

    memset(vis,0,sizeof(vis));
    memset(level,0,sizeof(level));
    bfs();
   /* for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<vis[i][j];
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
    {
        cout<<level[i][j];
    }
    cout<<endl;
    }
    /*
    */
    if(vis[n-1][n-1]==1)
    {
        cout<<level[n-1][n-1]<<endl;
    }
    else
    {
        bfs1();
        memset(vis,0,sizeof(vis));
        if(vis[n-1][n-1]==1)
    {
        cout<<"THE GAME IS A LIE"<<endl;
    }
    else
    {
        cout<<"INCONCEIVABLE"<<endl;
    }

    }

}
