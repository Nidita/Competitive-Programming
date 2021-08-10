#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e;
    cin>>a>>b>>c;
    if(a%c!=0)
    {
        d=(a/c)+1;
    }
    else
    {
         d=(a/c);
    }
      if(b%c!=0)
    {
        e=(b/c)+1;
    }
    else
    {
         e=(b/c);
    }
    cout<<d*e<<endl;
}
