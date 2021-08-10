#include <bits/stdc++.h>
using namespace std;
vector<int>adj[105];
bool vis[105];
stack<int>s;
int m,n;

void dfs(int a)
{
    if(vis[a])
    {
        return ;
    }
    vis[a]=true;
    for(int i=0;i<adj[a].size();i++)
    {
        dfs(adj[a][i]);
    }
    s.push(a);

}
int main()
{
    int x,y;
    while(cin>>n>>m)
    {
        if(m==0 && n==0)
        {
            break;
        }
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        memset(vis,false,sizeof(vis));
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
        while(!s.empty())
        {
            cout<<s.top()<<' ';
            s.pop();
        }
        cout<<endl;

        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
        }
    }
}
