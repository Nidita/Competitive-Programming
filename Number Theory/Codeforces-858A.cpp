#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,k,m;
    cin>>n>>k;
    m=n;
     long long f=0,t=0;
    while(n%2==0)
    {
        t++;
        n/=2;
    }
     while(n%5==0)
    {
        f++;
        n/=5;
    }
    if(k>t)
    {
      for(int i=1;i<=k-t;i++)
      {
          m*=2;
      }
    }
    if(k>f)
    {
        for(int i=1;i<=k-f;i++)
      {
          m*=5;
      }
    }
    cout<<m<<endl;
}
