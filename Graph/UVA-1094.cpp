#include<bits/stdc++.h>
#define inf 1000000000
using namespace std;
vector<int>adj[30000];

int n,visited[30000];
int dis[30000];
vector<int>Cost[30000];

void bfs(int s)
{
    for(int i=0;i<n;i++) {
            visited[i]=0;
    dis[i]=inf;
     }
    queue<int>Q;
    Q.push(s);
    visited[s] = 1;
    dis[s] = 0;

    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];
            if(visited[v]==0){
                visited[v] = 1;
                dis[v] = dis[u] + Cost[u][i];
                Q.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        scanf("%d",&n);
        for(int i=0;i<n-1;i++){
            int u,v,cost;
            scanf("%d %d %d",&u,&v,&cost);
            adj[u].push_back(v);
            adj[v].push_back(u);

            Cost[u].push_back(cost);
            Cost[v].push_back(cost);
        }
        bfs(0);
        int mx=0,strt;
        for(int i=0;i<n;i++){
            if(dis[i]>mx){strt=i;
             mx=dis[i];
              }
        }

        bfs(strt);

       mx=0;
        for(int i=0;i<n;i++){
            if(dis[i]>mx)
            {
               mx=dis[i];
            mx=dis[i]; }
        }
       printf("Case %d: %d\n",tt,mx);
       for(int i=0;i<n;i++){
            adj[i].clear();
       Cost[i].clear();
       }
    }
}
