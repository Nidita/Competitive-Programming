#include <bits/stdc++.h>
using namespace std;
int main()
{
     freopen("gcd.in", "r", stdin);
    int t;
    cin>>t;
    long long g=-1;
    while(t--)
    {

        long long a,b,c;
        cin>>a>>b;
        if(b!=a)
        {
            c=1;
        }
        else
        {
            c=a;
        }
        if(g==-1)
        {
            g=c;
        }
        else
        {
            g=__gcd(g,c);
        }
        cout<<g<<endl;
    }
}
