#include <bits/stdc++.h>
#define pii pair<int,int>
#define MX 1000000009
using namespace std;

int main()
{

    set<int>s;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
      map<int,int>m;
      vector<pii>v,vec;
      int mx=MX,my=MX;

      for(int i=0;i<n;i++)
      {
          int x,y;
          cin>>x>>y;
          v.push_back(make_pair(x,y));
          mx=min(mx,x);
          my=min(my,y);
      }
      int k=1;
      //cout<<my<<endl;
      int mx1=0,my1=0;
      for(int i=0;i<n;i++)
      {
          int x=v[i].first-mx;
          int y=v[i].second-my;
          vec.push_back(make_pair(x,y));
          m[x]=k;
           m[y]=k;
           k++;
           mx1=max(mx1,mx1);
           my1=max(my1,my1);
         // cout<<x<<' '<<y<<endl;

      }
      k--;
      int visited[mx1][my1],parent[mx1][my1];
      memset(visited,0,sizeof(visited));
      memset(parent,0,sizeof(parent));
      queue<pii>q;
      q.push(make_pair(0,0));
      visited[0][0]=1;
      int dx[]={0,0,1,-1};
      int dy[]={1,-1,0,0};
      int ans=-1;
      while(!q.empty())
      {
          pii u=q.front();
          q.pop();
          for(int i=0;i<4;i++)
          {
              int x=u.first+dx[i];
              int y=u.second+dy[i];
              if(!visited[x][y] && x>=0 && x<mx1 && y>=0 && y<my1){
             if(m[x]!=0)
             {
                 s.insert(m[x]);

             }
             else if(m[y]!=0)
             {
                 s.insert(m[y]);
             }
             q.push(make_pair(x,y));
             visited[x][y]=1;
             parent[x][y]=parent[u.first][u.second]+1;
             if(s.size()==k)
             {
                 ans=  parent[x][y];
                 break;
             }
              }
          }

      }
      s.clear();
      cout<<ans<<endl;




    }


}
