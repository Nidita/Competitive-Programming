#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,f,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       int m;
       cin>>m;
       int a[m];
       for(j=0;j<m;j++)
       {
           cin>>a[j];
       }
       k=(m+1)/2;
       for(j=0;j<((m+1)/2)-1;j++)
       {

           if(a[0]==1 && a[k-1]==7)
           {
               f=1;
    if(a[j]==a[j+1]||a[j+1]==a[j]+1)
          {
              f=1;
          }
          else
          {
              f=0;
              break;
          }
           }


          else
          {
              f=0;
              break;
          }
       }
       if(f==1){
       for(j=0;j<m/2;j++)
       {
           if(a[j]==a[m-1-j])
           {
               f=1;

           }
           else
           {
               f=0;
               break;
           }
       }

    }

    if(f==1)
    {
        cout<<"yes"<<endl;
    }
    else if(f==0)
    {
        cout<<"no"<<endl;

    }
}
}
