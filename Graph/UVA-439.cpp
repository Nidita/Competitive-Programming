#include <bits/stdc++.h>
using namespace std;
int color[10][10];
int vis[20][20];
int dx[]={2,2,-2,-2,1,1,-1,-1};
int dy[]={1,-1,1,-1,2,-2,2,-2};
void bfs(int a1,int a2,int b1,int b2)
{
    memset(color,0,sizeof(color));
     memset(vis,0,sizeof(vis));
    queue<pair<int,int>>q;
    pair<int,int>u,v;
    int x,y,x1,y1;
    q.push(make_pair(a1,a2));
    vis[a1][a2]=1;
     while(!q.empty())
    {

    u=q.front();
    q.pop();
     x=u.first;
     y=u.second;
    vis[x][y]=1;
    if(x==b1 && y==b2)
    {
        cout<<"To get from "<<(char)(a1+96)<<a2<<" to "<<(char)(b1+96)<<b2<<" takes "<<color[x][y]<<" knight moves."<<endl;

        return ;
    }
    for(int i=0;i<8;i++)
    {
        x1=x+dx[i];
        y1=y+dy[i];
        if(x1>0 && x1<=8 &&y1>0 && y1<=8 && vis[x1][y1]==0)
        {
            color[x1][y1]=color[x][y]+1;
            q.push(make_pair(x1,y1));
           vis[x1][y1]=1;

        }

    }
    }


}

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int c=(int)a[0]-48-48;
        int d=(int)a[1]-48;
        int e=(int)b[0]-48-48;
        int f=(int)b[1]-48;
        bfs(c,d,e,f);

    }
}
