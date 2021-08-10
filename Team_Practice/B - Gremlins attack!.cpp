#include <bits/stdc++.h>
#define mx 505
#define  pii pair<int,int>
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int visited[mx][mx];
int parent[mx][mx];
int grid[mx][mx];
int light[mx][mx];
map<pii,int>mo;
int n,m,k,s=10000005;

void bfs(int x,int y)
{
    queue<pii>q;

    q.push(make_pair(x,y));
    visited[x][y]=1;
    while(!q.empty())
    {
       pii u=q.front();
        q.pop();
        visited[u.first][u.second]=1;
        for(int i=0;i<4;i++)
        {
            int x1=u.first+dx[i];
            int y1=u.second+dy[i];

             if((x1>=0 && y1 >=0 && x1<=n-1 && y1<=n-1)&&light[x1][y1]==1&& visited[x1][y1]==0)
            {
                visited[x1][y1]=1;
               if(parent[u.first][u.second]==0)
               {
                   parent[x1][y1]=mo[make_pair(x1,y1)];
               }
               else
               {
                   parent[x1][y1]=parent[u.first][u.second];
               }
               if(x1==0 || y1==0 || x1==n-1 || y1==n-1)
               {
                   s=min(s,parent[x1][y1]);
               }


                q.push(make_pair(x1,y1));

            }


        }
    }


}

int main()
{
    memset(grid,0,sizeof(grid));
    memset(light,0,sizeof(light));

     cin>>n>>m>>k;
     for(int i=0;i<m;i++)
     {
         int x,y;
         cin>>x>>y;
         grid[x][y]=1;
         if(x==0 || y==0 || x==n-1 || y==n-1)
         {
             s=0;
         }
     }
     for(int i=0;i<k;i++)
     {
         int x,y;
         cin>>x>>y;
         pii v;
         v=make_pair(x,y);
         mo[v]=i+1;
         light[x][y]=1;

     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(grid[i][j]==1)
             {
                  memset(visited,0,sizeof(visited));
                    memset(parent,0,sizeof(parent));


                 bfs(i,j);
             }
         }

     }
    cout<<s<<endl;


}
