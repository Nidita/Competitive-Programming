
#include<bits/stdc++.h>
using namespace std;

const int MAX = 2e4+10;

vector < int > graph[MAX] , reverseGraph[MAX] , components[MAX];
bool vis[MAX];
int compCount;
stack<int>nodes;
int scc[MAX];

void DFS(int src)
{
    vis[src] = 1;
    for(auto i : graph[src])
    {
        if(!vis[i])
            DFS(i);
    }
    nodes.push(src);
}
void DFS2(int src)
{
    vis[src] = 1;
    for(auto i : reverseGraph[src])
    {
        if(!vis[i])
            DFS2(i);
    }
    scc[src] = compCount;
    components[compCount].push_back(src);
}


void kosaraju_SCC(int n)
{
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            DFS(i);
    }
    memset(vis,0,sizeof vis);
    while(nodes.size())
    {
        int top = nodes.top();
        nodes.pop();
        if(!vis[top])
        {
            DFS2(top);
            compCount++;
        }
    }
}

int countRoads(int n)
{
    int c1 = 0 , c2 = 0, in[n+2] = {} , out[n+2] = {};
    for(int i=1;i<=n;i++)
    {
        for(auto j : graph[i])
        {
            if(scc[i] != scc[j])
                out[scc[i]]++ , in[scc[j]]++;
        }

    }
     for(int i=1;i<compCount;i++)
    {
        if(in[i] == 0)
            c1++;
        if(out[i] == 0)
            c2++;
    }
    if(compCount == 2)
        c1 = 0 , c2 = 0;
    return max(c1,c2);
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t,cas=1;

    cin >> t;

    while(t--)
    {
        int n,m,u,v;
  compCount = 1;
       for(int i=1;i<MAX;i++)
        graph[i].clear() ,reverseGraph[i].clear() , components[i].clear();

        cin >> n >> m;

        for(int i=0;i<m;i++)
        {
            cin >> u >> v;

    graph[u].push_back(v);
    reverseGraph[v].push_back(u);
        }

        kosaraju_SCC(n);

        cout << "Case " << cas++ << ": " << countRoads(n) << endl;

    }
}
