#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r=11,ans=1;
    cin>>n;
    n=n-1;
    for(int i=1;i<=r;i++)
    {
        ans*=(n-i+1);
        ans/=i;
    }
    cout<<ans<<endl;
}
