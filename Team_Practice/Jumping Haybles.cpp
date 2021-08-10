#include<bits/stdc++.h>
using namespace std;
#define mx 2000+5
#define inf 0x3f3f3f3f

int n,k;
char c[mx][mx];
int row[mx],col[mx],d[mx][mx];

int main()
{
    cin>>n>>k;

        for(int i=0; i<n; i++)
        {

            for(int j=0;j<n;j++)
            {
                cin>>c[i][j];
            }
        }


        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        memset(d,inf,sizeof(d));
        d[0][0]=0;

        for(int i=0; i<n; i++)
        {


            for(int j=0; j<n; j++){
               // cout<<'*'<<' '<<i<<' '<<j<<endl;
                if(c[i][j]=='#') continue;

                while(row[i]<j)
                {


                    if((j-row[i])<=k&&c[i][row[i]]=='.')
                        break;
                    row[i]++;
                }
                d[i][j]=min(d[i][j],d[i][row[i]]+1);

               while(col[j]<i)
               {


                    if((i-col[j])<=k&&c[col[j]][j]=='.')
                        break;
                    col[j]++;
               }
                d[i][j]=min(d[i][j],d[col[j]][j]+1);

                if(d[i][j]<=d[i][row[i]])
                {
                    row[i]=j;
                }
                if(d[i][j]<=d[col[j]][j])
                {
                    col[j]=i;
                }
            }
        }
        if(d[n-1][n-1]==inf)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<d[n-1][n-1]<<endl;
        }



}
