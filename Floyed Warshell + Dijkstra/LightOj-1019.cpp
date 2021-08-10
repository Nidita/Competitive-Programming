#include<bits/stdc++.h>
using namespace std;
#define RESET(a, b) memset(a, b, sizeof(a))
#define dis first
#define node second
#define pii pair <int, int>

const int mx = 100005;
const int inf = 0x3f3f3f3f;

vector <pii> adj[mx];
int dis[mx];

void dijkastra(int start)
{
    priority_queue <pii, vector <pii>, greater<pii> > pq;
    RESET(dis, inf);

    pq.push(pii(0, start));
    dis[start] = 0;

    while(!pq.empty()){
        int n = pq.top().node;
        int d = pq.top().dis;
        pq.pop();
        ///smaller value is already inserted so need to check it
        if(d > dis[n]){
            continue;
        }
        for(int i = 0; i < adj[n].size(); i++){
            int a = adj[n][i].node;
            int b = adj[n][i].dis;
            if(d + b < dis[a]){
                dis[a] = d+b;
                pq.push(pii(dis[a], a));
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--){
            k++;
    int M, N, start;
    scanf("%d%d", &M, &N);

    for(int i = 0; i < N; i++){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(pii(w, v));
        adj[v].push_back(pii(w, u));
    }

    dijkastra(1);
    if(dis[M]==inf)
    {
        cout<<"Case "<<k<<": "<<"Impossible"<<endl;
    }
    else
    {
        cout<<"Case "<<k<<": "<<dis[M]<<endl;
    }
    for(int k=0;k<=M;k++)
    {
        adj[k].clear();
    }
    }
}
