#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int inf = 0x3f3f3f;
int mst(vector<pii>adj[],int n)
{
    int start=0, cost=0;
    bool ans=true;
    priority_queue<pii,vector<pii>, greater<pii>>pq;
    vector<bool>vis(n,false);
    vector<int>dis(n,inf);
    vector<int>parent(n,-1);
    pq.push(pii(0,start));
    dis[start]=0;
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        vis[u]=true;
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i].first;
            int w=adj[u][i].second;
            if(vis[v]==false && dis[v]>w)
            {
                dis[v]=w;
                parent[v]=u;
                pq.push(pii(dis[v],v));
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(parent[i]==-1)
        {
            ans=false;
            break;
        }
        else
        {
            cost+=dis[i];
        }
    }
    if(ans==false)
    {
        return -1;
    }
    else
    {
        return cost;
    }
}
int main()
{
    int t,n;
    cin>>t;
    int k=1;
    while(t--)
    {

        cin>>n;
        int arr[n][n];
        vector<pii>adj[60];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                sum+=arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(arr[i][j]!=0 && arr[j][i]!=0)
                    {
                        adj[i].push_back(pii(j,min(arr[i][j],arr[j][i])));
                    }
                    else if(arr[i][j]==0 && arr[j][i]==0)
                    {
                        //adj[i].push_back(pii(j,max(arr[i][j],arr[j][i])));
                    }
                    else
                    {
                        adj[i].push_back(pii(j,max(arr[i][j],arr[j][i])));
                    }

                }
            }
        }
        if(mst(adj,n)!=-1){
        cout<<"Case "<<k++<<": "<<sum-mst(adj,n)<<endl;
        }
        else
        {
           cout<<"Case "<<k++<<": "<<mst(adj,n)<<endl;
        }
    }
}
