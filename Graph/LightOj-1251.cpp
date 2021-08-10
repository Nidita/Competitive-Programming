#include <bits/stdc++.h>
#define MAX (2*8000+5)
using namespace std;
vector <int> adj[MAX],rev[MAX],order,res;
int comp[MAX],n,m,t;
bool vis[MAX];
int value(int x)
{
         if ( x < 0 ){
        x=-x;
        x--;
        return ((x)<<1)+1;
    }
    x--;
    return ((x)<<1);

}
bool twosat()
{
       int i;

       for(i=0;i<2*n;i+=2)
         if(comp[i]==comp[i+1]) return false;
       return true;
}
void scc(int u,int col)
{
       comp[u]=col;
       int i;
       for(i=0;i<rev[u].size();i++)
       {
              int v=rev[u][i];
              if(comp[v]==-1)
              {
                     scc(v,col);
              }
       }
}
void topo(int u)
{      vis[u]=1;
       int i;
       for(i=0;i<adj[u].size();i++)
       {
              int v=adj[u][i];
              if(!vis[v]) topo(v);
       }
       order.push_back(u);
}
int main()
{
     int cs,t,i;
    scanf("%d",&t);

    for(cs=1;cs<=t;cs++)
    {
           scanf("%d %d",&m,&n);
        for(i=0;i<=2*n+1;i++)
           {      vis[i]=0;
                  comp[i]=-1;
                  adj[i].clear();
                  rev[i].clear();
           }
           while(m--)
           {
                  int x,y;
                  scanf("%d %d",&x,&y);

                  //cout<<x<<' '<<y<<endl;
                  x=value(x);
                  y=value(y);
                 // cout<<x<<' '<<y<<endl;
                  adj[x^1].push_back(y);
                  adj[y^1].push_back(x);
                 // cout<<(x^1)<<' '<<(y^1)<<endl;
                  rev[x].push_back(y^1);
                  rev[y].push_back(x^1);
           }
            order.clear();
             for(i=0;i<2*n;i++)
             {
                 if(!vis[i])
                 {
                     topo(i);
                 }
                 }
                  reverse(order.begin(),order.end());
                  int cnt=0;
            for(i=0;i<order.size();i++)
            {
            if(comp[order[i]]==-1)
              {
                  scc(order[i],cnt++);
              }
              }
              if(!twosat())
          {
                printf("Case %d: No\n",cs);
          }
          else
          {
                 res.clear();
                 printf("Case %d: Yes\n",cs);
                 for(i=0;i<2*n;i+=2)
                     if(comp[i]>comp[i+1]) res.push_back(i/2);
                 printf("%d",res.size());
                 for(i=0;i<res.size();++i) printf(" %d",res[i]+1);
                 puts("");

          }
    }
}
