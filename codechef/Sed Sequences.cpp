#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0,k;
        cin>>n>>k;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            sum+=x;
        }
        if(sum%k==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}

