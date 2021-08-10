#include <bits/stdc++.h>

using namespace std;
vector<int>v[2005];
int visited[2005];
int color[2005];
int k;
void bfs(int a)
{
    queue<int>q;
    q.push(a);
    visited[a]=1;
      color[a]=1;
    while(!q.empty())
    {
        int u=q.front();

        q.pop();
        for(int i=0;i<v[u].size();i++)
        {  int p=v[u][i];
            if(visited[p]==0)
            {
                int p=v[u][i];
                if(color[u]==1)
                {
                    color[p]=2;
                }
                else
                {
                    color[p]=1;
                }
                visited[p]=1;
                q.push(p);
            }
            else
            {
               if(color[p]==color[u])
               {
                   k=2;
                   break;

               }
            }
        }
    }
}

int main()
{
  int t,j=1;
  cin>>t;
  while(t--)
  {
      int a,b;
      cin>>a>>b;
     for(int i=1;i<=b;i++)
     {
         int c,d;
         cin>>c>>d;
         v[c-1].push_back(d-1);
          v[d-1].push_back(c-1);
     }
     memset(visited,0,sizeof(visited));
      memset(color,0,sizeof(color));
   k=1;
     for(int i=0;i<a;i++)
     {
         if(visited[i]==0)
            {
            if(k==1){
             bfs(i);
            }
            else
            {
                break;
            }

            }
     }
     for(int i=0;i<a;i++)
     {
         v[i].clear();
     }
     if(k!=1)
     {
         cout<<"Scenario #"<<j++<<":"<<endl;
cout<<"Suspicious bugs found!"<<endl;
     }
     else
     {
         cout<<"Scenario #"<<j++<<":"<<endl;
cout<<"No suspicious bugs found!"<<endl;
     }

  }
}
