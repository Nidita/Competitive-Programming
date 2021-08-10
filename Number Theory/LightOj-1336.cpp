#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,l=0;
    cin>>t;
    while(t--)
    {
        l++;
        long long n;
        cin>>n;
        long long ans=0;
        ans=sqrt(n);
        ans+=sqrt(n/2);
        cout<<"Case "<<l<<": "<<n-ans<<endl;
    }

}
