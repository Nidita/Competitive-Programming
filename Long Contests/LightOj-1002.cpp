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
            if(max(d,b)< dis[a]){
                dis[a] = max(d,b);
                pq.push(pii(dis[a], a));
            }
        }
    }
}
int main()
{
    int M, N, start;
   // scanf("%d%d", &M, &N);
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){

           RESET(dis, inf);

     scanf("%d%d", &M, &N);

    for(int i = 0; i < N; i++){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        adj[u].push_back(pii(w, v));
        adj[v].push_back(pii(w, u));
    }
    scanf("%d", &start);
    cout<<"Case "<<j<<":"<<endl;
    dijkastra(start);
    for(int i=0;i<M;i++)
    {
        if(dis[i]==inf)
        {
            cout<<"Impossible"<<endl;
        }
        else{
        cout<<dis[i]<<endl;
        }
    }
    for(int i=0;i<M;i++)
    {
        adj[i].clear();
    }
    }
}
