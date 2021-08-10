#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
bool cmp(const edge &a,const edge &b)
{
    return a.w<b.w;
}

vector<edge>e;
int pr[mx];
int n,m;
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
    ll cst=0;
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
printf("%lld\n",cst);
}
int main()
{
ios_base::sync_with_stdio(0);
   // int t;
   // cin>>t;
   // for(int cs=1;cs<=t;cs++)
   // {
       // e.clear();
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {int u,v; ll w;
        cin>>u>>v>>w;

            e.push_back(edge(u,v,w));
        }

       // }

   // printf("Case %d: ",cs);
    mst();
    //}

}


