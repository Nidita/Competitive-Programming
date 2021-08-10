
#include<bits/stdc++.h>

#define dis first
#define node second
#define pii pair <long long, int>
#define ll long long
#define RESET(a, b) memset(a, b, sizeof(a))
using namespace std;
const int  mx = 100005;
const long long inf =0x3f3f3f3f;


vector <pii> adj[mx];
ll dis[mx];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int c;
void dijkastra(int start)
{
    priority_queue <pii, vector <pii>, greater<pii> > pq;
    RESET(dis, inf);

    pq.push(pii(0, start));
    dis[start] = 0;

    while(!pq.empty()){
        int n = pq.top().node;
        ll d = pq.top().dis;
        pq.pop();
        ///smaller value is already inserted so need to check it
        if(d > dis[n]){
            continue;
        }
        for(int i = 0; i < adj[n].size(); i++){
            int a = adj[n][i].node;
            ll b = adj[n][i].dis;
            //cout<<n<<' '<<d<<' '<<a<<' '<<b<<endl;
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

    while(t--)
        {
           int num,col,row;
           cin>>num>>col>>row;
           map<char,ll>m;
           for(int i=0;i<num;i++)
           {
               char x;
               ll c;
               cin>>x>>c;
               m[x]=c;
           }
           c=0;
           int start;
           ll arr[row][col];
           int in[row][col];
           for(int i=0;i<row;i++)
           {
               for(int j=0;j<col;j++)
               {
                   char x;
                   cin>>x;
                   arr[i][j]=m[x];
                   if(x=='E')
                   {
                       start=c;
                   }
                   in[i][j]=c++;
               }
           }
           m['E']=0;

            for(int i=0;i<row;i++)
           {
               for(int j=0;j<col;j++)
               {

                   for(int k=0;k<4;k++)
                   {
                       if(dx[k]+i>=0 &&dx[k]+i<row &&dy[k]+j>=0 &&dy[k]+j<col)
                       {

                           adj[in[i][j]].push_back(pii(arr[i+dx[k]][j+dy[k]],in[i+dx[k]][j+dy[k]]));

                       }

                   }

               }
           }

            dijkastra( start);
           ll o=inf;
           for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    if(i==0 || i==row-1 || j==0 || j==col-1)
                    {
                        o=min(o,dis[in[i][j]]);
                    }
                }
            }
            cout<<o<<endl;
              for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    adj[in[i][j]].clear();
                }
            }

    }
}
