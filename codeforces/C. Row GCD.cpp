#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    ll x=0;
    for(int i=1;i<n;i++)
    {
        x=__gcd(x,a[i]-a[i-1]);
    }
    for(int i=0;i<m;i++)
    {
        cout<<__gcd(a[0]+b[i],x)<<' ';
    }
    cout<<endl;
}
