#include <bits/stdc++.h>
using namespace std;
int visited[2005];
int color[2005];
int k;
vector<int>adj[2005];
void bfs(int s)
{
    queue<int>q;
    k=0;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        visited[u]=1;
        int red=0,blue=0;
//cout<<u<<'*'<<endl;
//cout<<color[u]<<endl;

    for(int i=0;i<adj[u].size();i++)
    {

        int v=adj[u][i];
        //cout<<v<<endl;

        if(visited[v]==0)
        {
            q.push(v);
        }
        else
        {
            if(color[v]==1)
            {
                red=1;
            }
            else
            {
                blue=1;
            }
        }
        if(red==1 && blue==1)
        {
            k=1;
            break;
        }
        else if(red==1)
        {
            color[u]=2;
        }
        else
        {
            color[u]=1;
        }
    }
    //cout<<color[u]<<endl;
    if(k==1)
    {
        break;
    }
    }
}
int main()
{
    int t,j=0;
    cin>>t;
    while(t--)
    {
        int n,e,a,b;
        cin>>n>>e;
        memset(visited,0,sizeof(visited));
        memset(color,0,sizeof(color));
        k=0;
        for(int i=1;i<=e;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);

        }
        for(int i=1;i<=n;i++)
        {
            if(k==0)
            {


            if(visited[i]==0)
            {
                bfs(i);
            }
            }
            else
            {
                break;
            }
        }
        cout<<"Scenario #"<<++j<<":"<<endl;
        if(k==1)
        {
            cout<<"Suspicious bugs found!"<<endl;
        }
        else
        {
            cout<<"No suspicious bugs found!"<<endl;
        }
                for(int i=1;i<=n;i++)
        {
            adj[i].clear();
        }

    }
}
