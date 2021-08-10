#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,c,s=0,n,m,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        k=n/(m*2);
        j=m*m;


         cout<<"Case "<<i<<": "<<j*k<<endl;
    }
}
