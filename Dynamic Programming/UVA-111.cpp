#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
      int x;
      cin>>x;
      a[x-1]=i;
   }
   int b[n],k=0,c;
    int y[n][n];
   while( cin>>c)
   {
       b[c-1]=0;
     for(int l=1;l<n;l++){
            cin>>c;
       b[c-1]=l;

     }




           for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(a[i]==b[j])
                   {
                      if(i==0 || j==0)
                      {
                          y[i][j]=1;
                      }

                   else
                   {
                       y[i][j]=y[i-1][j-1]+1;
                   }
                   }
                   else
                   {
                       if(i==0 && j==0)
                       {
                           y[i][j]=0;
                       }
                       else if(i==0)
                       {
                           y[i][j]=y[i][j-1];
                       }
                       else if(j==0)
                       {
                         y[i][j]=y[i-1][j];
                       }
                       else
                       {
                           y[i][j]=max(y[i-1][j],y[i][j-1]);

                       }
                   }
                   //cout<<y[i][j]<<" ";
               }
              // cout<<endl;
           }
           k=0;
        cout<<y[n-1][n-1]<<endl;


   }

}
