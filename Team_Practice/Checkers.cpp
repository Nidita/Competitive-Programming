#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int n;
char c[30][30];
int visit[30][30];
int dx[]={1,1,-1,-1};
int dy[]={-1,1,1,-1};
int  bfs(int x,int y)
{
    int ans=0;
  for(int i=0;i<4;i++)
  {
      if(x+dx[i]>=1 && x+dx[i]<=n &&y+dy[i]>=1 && y+dy[i]<=n)
      {
          if(c[x+dx[i]][y+dy[i]]=='B')
          {
             ans=1+ bfs(x+dx[i],y+dy[i]);
             cout<<ans<<endl;

          }
      }
  }
   return ans;


}

int main()
{

    cin>>n;
    vector<pii>v;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='B')
            {
                v.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        memset(visit,0,sizeof(visit));
        bfs(v[i].first,v[i].second);
    }
}
