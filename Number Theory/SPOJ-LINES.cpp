#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
       map<pair<int,int>,int>m;
       int  arrx[n],arry[n];

       for(int i=0;i<n;i++)
       {
           int  x,y;
           cin>>x>>y;
           arrx[i]=x;
           arry[i]=y;

       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(i!=j){

               int mx=arrx[j]-arrx[i];
               int my=arry[j]-arry[i];
               int g=__gcd(mx,my);
               mx/=g;
               my/=g;
               m[make_pair(mx,my)]++;
           }
           }
       }

       cout<<m.size()<<endl;

    }
}
