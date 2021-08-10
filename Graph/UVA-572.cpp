#include<bits/stdc++.h>

using namespace std;
char c[1000][1000];
int m,n;
int dx[]={0,0,1,-1,1,-1,1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};
void dfs(int x,int y){
    if(x<0||y<0||x==m||y==n)
        return;
    if(c[x][y]=='*')
        return;
    if(c[x][y]=='@')
       c[x][y]='*';
    for(int i=0;i<8;i++)
    {
        dfs(x+dx[i],y+dy[i]);
    }
}

int main()
{
    int i,j;
    while(1){
        cin>>m>>n;
        if(m==0&&n==0)
            return 0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>c[i][j];
            }

        }
        int cnt=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(c[i][j]=='@'){
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        cout<<cnt<<endl;
    }
}
