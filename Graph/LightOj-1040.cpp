#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cst,cst1;
struct edge{
    int u,v;
    ll w;
    edge(int u,int v,ll w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
const int mx=200010;
vector<int>adj[mx];
int visited[mx];
void bfs(int n)
{
    queue<int>q;
    q.push(n);
    visited[n]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                visited[v]=1;
                q.push(v);
            }
        }
    }
}

bool cmp(const edge &a,const edge &b)
{
    return a.w<b.w;
}


vector<edge>e;

int pr[mx];
int n;
int find(int r)
{
    if(r!=pr[r])
    return pr[r]=find(pr[r]);
    return r;
}
void mst()
{
    sort(e.begin(),e.end(),cmp);
    for(int i=0;i<=n;i++)
    pr[i]=i;

    int co=0;
     cst=0;
    int sz=e.size();
        for(int i=0;i<sz;i++ )
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        //cout<<e[i].u<<" "<<e[i].v<<" "<<u<<" "<<v<<endl;
        if(u!=v)
        {
             pr[u]=v;
        co++;
        cst=cst+e[i].w;
        if(co==n-1)
        break;
        }

    }
//printf("%lld\n",cst);
}

int main()
{
ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
   for(int cs=1;cs<=t;cs++)
    {
        int sum=0;
       e.clear();

        cin>>n;
       for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++){
            ll w;

        cin>>w;
        sum+=w;
if(w!=0 && i!=j)
{

adj[i].push_back(j);
adj[j].push_back(i);
            e.push_back(edge(i,j,w));

        }
        }
    }


 int cnt=0,o=1;
      memset(visited,0,sizeof(visited));
      for(int i=1;i<=n;i++)
      {
          if(visited[i]==0){
          if(cnt<1)
          {
             bfs(i);

             cnt++;
          }
          else
          {
              o=-1;
              break;
          }
          }
      }
      if(o!=-1){
      mst();
      cout<<"Case "<<cs<<": "<<sum-cst<<endl;
      }
      else
      {
            cout<<"Case "<<cs<<": "<<o<<endl;
      }


     for(int i=1;i<=n;i++)
      {
          adj[i].clear();
      }


}

}
