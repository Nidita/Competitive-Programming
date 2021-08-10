#include<bits/stdc++.h>
using namespace std;

int n,k;
int dp[15][(1<<15)+2][15];
bool chk(int mask)
{
    if(mask == ((1<<n)-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int solve(int pos, int mask,int prev)
{
    if(pos==n)
    {
        if(mask == ((1<<n)-1))
    {
        return 1;
    }
    return 0;
    }
    if(dp[pos][mask][prev]!=-1)return dp[pos][mask][prev];


        int val=0;
        for(int i=0;i<n;i++)
        {
            if(pos==0 || abs(prev-i)<=k)
            {
                val+=solve(pos+1, mask|(1<<i), i);
            }
        }


    return  dp[pos][mask][prev]=val;

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        scanf("%d %d",&n,&k);
        memset(dp,-1,sizeof(dp));
        printf("%lld\n",solve(0,0,0));
    }
}
