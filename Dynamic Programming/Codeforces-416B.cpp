#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long  r,c;
   cin>>r>>c;
   int a[r][c];
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           cin>>a[i][j];
       }
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           if(i==0 && j==0)
           {
               a[i][j]==a[i][j];
               // cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
           }
         else  if(i==0)
           {
               a[i][j]+=a[i][j-1];
              // cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
           }
           else if(j==0)
           {
              a[i][j]+=a[i-1][j];
               // cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
           }
           else
           {
               a[i][j]+=max(a[i][j-1],a[i-1][j]);
                 //cout<<i<<" "<<j<<" "<<a[i][j]<<" ";
           }
       }
       //cout<<endl;
   }
   for(int i=0;i<r;i++)
   {
       cout<<a[i][c-1]<<" ";
   }
   cout<<endl;

}
