#include <bits/stdc++.h>
#define mx 100005
using namespace std;
vector<int>adj[mx];
int color[mx],visited[mx],level[mx];
int n,m;
void bfsc(int x)
{
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        visited[u]=1;
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {


            if(color[u]==1)
            {
                color[v]=2;
            }
            else
            {
                color[v]=1;
            }

            visited[v]=1;
            q.push(v);
            }
        }
    }
}
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    while(!q.empty())
    {
        int u=q.front();
        visited[u]=1;

        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0 )
            {


           level[v]=level[u]+(color[v]!=color[u]);
         //  cout<<'0'<<' '<<u<<' '<<v<<' '<<color[u]<<' '<<color[v]<<' '<<level[u]<<' '<<level[v]<<endl;
// cout<<v<<endl;
            visited[v]=1;
            q.push(v);
            }
           else
            {
                level[v]=min(level[v],level[u]+(color[v]!=color[u]));
               // cout<<v<<endl;
               //  cout<<'1'<<' '<<u<<' '<<v<<' '<<color[u]<<' '<<color[v]<<' '<<level[u]<<' '<<level[v]<<endl;
            }

        }
    }
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
         adj[b-1].push_back(a-1);
    }
    for(int i=0;i<mx;i++)
    {
        color[i]=0;
        visited[i]=0;
        level[i]=0;
    }
color[0]=1;
    bfsc(0);
  /* for(int i=0;i<n;i++)
    {
        cout<<color[i]<<' ';
    }
cout<<'*'<<endl;
*/
    for(int i=0;i<mx;i++)
    {

        visited[i]=0;
        level[i]=0;
    }
    bfs(0);
    cout<<level[n-1]-1<<endl;


}

