#include <bits/stdc++.h>
using namespace std;
int visited[105];
vector<int>adj[105];
int n;
void bfs(int x)
{
    memset(visited,0,sizeof(visited));
    queue<int>q;
    q.push(x);
   // visited[x]=1;
   // cout<<x<<endl;
    while(!q.empty())
    {
        int u=q.front();
        //cout<<u<<endl;
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                q.push(v);
            }
        }
    }
    int cnt=0;

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            cnt++;
            //cout<<i<<' ';
        }
    }
    cout<<cnt;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            //cnt++;
            cout<<' '<<i;
        }
    }
    cout<<endl;
}
int main()
{
    int x,m,t,d;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        while(cin>>m)
        {
            if(m==0)
            {
                break;
            }
            while(cin>>x)
            {
                if(x==0)
                {
                    break;
                }

            adj[m].push_back(x);
            }
        }
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            cin>>d;
            bfs(d);
        }
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
        }
    }
}
