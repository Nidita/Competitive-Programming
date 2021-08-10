#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
long long dp[10005];
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        long long n;
        cin>>n;
        if(n==0)
        {
            cout<<"Case "<<j++<<": "<<0<<endl;
            continue;
        }
        if(n==1)
        {
            long long x;
            cin>>x;
              cout<<"Case "<<j++<<": "<<x<<endl;
            continue;
        }
        else
        {
            cin>>dp[0]>>dp[1];
          dp[1]=max(dp[0],dp[1]);
            for(int i=2;i<n;i++)
            {
                long long x;
                cin>>x;
                dp[i]=max(dp[i-2]+x,dp[i-1]);
            }
        }
        long long  m=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,dp[i]);
        }
       cout<<"Case "<<j++<<": "<<m<<endl;
    }
}
