#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int cst;
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
    int t,mp;
    cin>>t;
   for(int cs=1;cs<=t;cs++)
    {
       map<string,int>m;
       e.clear();
 n=1;
        cin>>mp;
       while(mp--){
          string a,b;
            ll w;

        cin>>a>>b>>w;
        if(m.count(a)==0)
        {
            m[a]=n;
            n++;
        }
         if(m.count(b)==0)
        {
            m[b]=n;
            n++;
        }

adj[m[a]].push_back(m[b]);
adj[m[b]].push_back(m[a]);
            e.push_back(edge(m[a],m[b],w));

        }

    n--;
   // cout<<n<<endl;


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
      cout<<"Case "<<cs<<": "<<cst<<endl;
      }
      else
      {
            cout<<"Case "<<cs<<": "<<"Impossible"<<endl;
      }


     for(int i=1;i<=n;i++)
      {
          adj[i].clear();
      }


}

}



