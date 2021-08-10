
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

const lli mod=1000000007;
int n,m;
lli dp[105][(1<<10)+5][10][2];

lli solve(int pos, int mask, int prev, int start)
{
    if(pos==m)
    {
        if(mask == ((1<<n)-1))
        {
            return 1;
        }
        return 0;
    }

    if(dp[pos][mask][prev][start]==-1)
    {
        int low=0,high=n;
        lli val=0;
        for(int i=low;i<high;i++)
        {

            int n_mask=mask;
            if(!start || abs(prev-i)==1)
            {


                 if(!(!start and i==0))
                {
                    n_mask=mask|(1<<i);
                }

                val=(val+  solve(pos+1, n_mask, i ,start|(i!=0)))%mod;
            }
        }
        dp[pos][mask][prev][start]=val;
    }
    return dp[pos][mask][prev][start];
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",solve(0,0,0,0));
    }
}
