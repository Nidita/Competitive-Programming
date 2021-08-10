#include <bits/stdc++.h>
using namespace std;
int color[1005],visited[1005];
vector<int>adj[1005];
void bfs(int x)
{
    memset(visited,0,sizeof(visited));
    memset(color,0,sizeof(color));

    queue<int>q;
    q.push(x);
    color[x]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        visited[u]=1;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                color[v]=color[u]+1;
                q.push(v);

            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int p,n;
    cin>>p>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(0);
    for(int i=1;i<p;i++)
    {
        cout<<color[i]<<endl;
    }
    for(int i=0;i<p;i++)
    {
        adj[i].clear();
    }
    if(t)
            printf("\n");
    }
}
