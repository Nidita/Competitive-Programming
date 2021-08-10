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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
/*void dijkastra(int start)
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
*/
int main()
{
    int t;
    cin>>t;

    while(t--){
           int num,col,row;
           cin>>num>>col>>row;
           map<char,int>m;
           for(int i=0;i<num;i++)
           {
               char x;
               int c;
               cin>>x>>c;
               m[x]=c;
           }
           int c=0,start;
           int arr[row][col],in[row][col];
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
         /*   for(int i=0;i<row;i++)
           {
               for(int j=0;j<col;j++)
               {
                   for(int k=0;k<4;k++)
                   {
                       if(dx[k]+i>=0 &&dx[k]+i<row &&dy[k]+i>=0 &&dy[k]+i<col)
                       {
                           adj[in[i][j]].push_back(pii(m[arr[i+dx[k]][j+dx[k]]],in[i+dx[k]][j+dy[k]]));
                           adj[in[i+dx[k]][j+dy[k]]].push_back(pii(m[arr[i][j]],in[i][j]));

                       }
                   }
               }
           }
        dijkastra(start);
           int o=inf;
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
           for(int i=0;i<c;i++)
           {
               adj[c].clear();
           }
           */
           for(int i=0;i<row;i++)
           {
               for(int j=0;j<col;j++)
               {
                   cout<<arr[i][j]<<' ';
               }
               cout<<endl;
           }
            for(int i=0;i<row;i++)
           {
               for(int j=0;j<col;j++)
               {
                   cout<<in[i][j]<<' ';
               }
               cout<<endl;
           }
    }
}
