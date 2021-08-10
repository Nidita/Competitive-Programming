#include <bits/stdc++.h>
using namespace std;
int w[105][105];
int main()
{
    int a,b,m=0,j=1;
    int s=0,cnt=0;
    for(int i=1;i<=104;i++)
    {
        for(int j=1;j<=104;j++)
        {
            w[i][j]=2e8;
        }
    }
  while(cin>>a>>b)
  {
      if(a==0 && b==0)
      {
          break;
      }
      m=max(m,max(a,b));
      w[a][b]=1;
      while(cin>>a>>b)
      {
           if(a==0 && b==0)
      {
          break;
      }
        w[a][b]=1;

  m=max(m,max(a,b));
      }
    /*  for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=m;j++)
          {
              cout<<w[i][j]<<" ";
          }
          cout<<endl;
      }*/
    for(int k = 1; k <= m; k++){
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= m; j++){
            w[i][j] = min( w[i][j], w[i][k] + w[k][j] );
        }
    }
}
      s=0,cnt=0;
/* for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=m;j++)
          {
              cout<<w[i][j]<<" ";
          }
          cout<<endl;
      }*/
      for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=m;j++)
          {
              if(w[i][j]!=2e8)

              {
if(i!=j){
               //cout<<w[i][j]<<endl;
                  s+=w[i][j];
                  cnt++;
}
              }
          }
      }
    cout<<"Case "<<j++<<": average length between pages = "<<fixed<<setprecision(3)<<(double)s/(double)cnt<<" clicks"<<endl;

      for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m;j++)
        {
            w[i][j]=2e8;
        }
    }
    m=0;
  }

  }
