#include <bits/stdc++.h>
using namespace std;
char c[11][11];
int visited[11][11];

 int m,n,s;
 void bfs(int x,int y,int z)
 {
     //cout<<c[x][y]<<endl;
     if(visited[x][y]!=0)
     {

         cout<<visited[x][y]-1<<" step(s) before a loop of "<<z-visited[x][y]<<" step(s)"<<endl;


     }
   else  if(x<0 || y<0 ||x>=m || y>=n)
     {

         cout<<z-1<<" step(s) to exit"<<endl;


     }
       else if(c[x][y]=='W')
     {

         visited[x][y]=z++;
         y-=1;
         bfs(x,y,z);

     }
      else  if(c[x][y]=='S')
     {

         visited[x][y]=z++;
         x+=1;
         bfs(x,y,z);

     }
       else if(c[x][y]=='E')
     {

         visited[x][y]=z++;
         y+=1;
         bfs(x,y,z);

     }
       else if(c[x][y]=='N')
     {

         visited[x][y]=z++;
         x-=1;
         bfs(x,y,z);

     }


 }
int main()
{

    while(cin>>m>>n>>s)
    {
        if(m==0 && n==0 && s==0)
        {
            break;
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>c[i][j];

            }
        }
       /* for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<c[i][j];
            }
            cout<<endl;
        }
        */
        memset(visited,0,sizeof(visited));
        bfs(0,s-1,1);
    }
}
