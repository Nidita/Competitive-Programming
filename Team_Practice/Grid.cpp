#include <bits/stdc++.h>
#define mx 505
#define pii pair<int,int>

using namespace std;
int m,n;
int visit[mx][mx],level[mx][mx],arr[mx][mx];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};
void bfs(int i,int j)
{
    queue<pii>q;
    pii u=make_pair(i,j);
    q.push(u);
    while(!q.empty())
    {
        pii v=q.front();
        q.pop();
        visit[v.first][v.second]=1;
        //cout<<v.first<< ' '<<v.second<<endl;
       for(int i=0;i<4;i++)
       {
           if(v.first+(arr[v.first][v.second]*dx[i])>=1 &&v.first+(arr[v.first][v.second]*dx[i])<=m &&v.second+(arr[v.first][v.second]*dy[i])>=1 &&v.second+(arr[v.first][v.second]*dy[i])<=n  )
           {
               if( !visit[v.first+(arr[v.first][v.second]*dx[i])][v.second+(arr[v.first][v.second]*dy[i])])
               {
//cout<<v.first+(arr[i][j]*dx[i])<<' '<<v.second+(arr[i][j]*dy[i])<<endl;

               q.push(make_pair(v.first+(arr[v.first][v.second]*dx[i]),v.second+(arr[v.first][v.second]*dy[i])));
               level[v.first+(arr[v.first][v.second]*dx[i])][v.second+(arr[v.first][v.second]*dy[i])]+=(level[v.first][v.second]+1);
                 visit[v.first+(arr[v.first][v.second]*dx[i])][v.second+(arr[v.first][v.second]*dy[i])]=1;
               }

           }
       }
    }

}
int main()
{
    memset(visit,0,sizeof(visit));
      memset(level,0,sizeof(level));
      cin>>m>>n;
      for(int i=1;i<=m;i++)
      {
          string s;
          cin>>s;
         for(int j=1;j<=n;j++)
         {
             arr[i][j]=(int)s[j-1]-'0';
         }
      }
      bfs(1,1);
      if(visit[m][n])
      {
          cout<<level[m][n]<<endl;
      }
      else
      {
          cout<<"IMPOSSIBLE"<<endl;
      }



}
