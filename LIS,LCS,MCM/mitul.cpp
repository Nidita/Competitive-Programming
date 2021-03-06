
///in the name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mx =1e3+9;
typedef long long ll;
ll dp[mx][mx];
ll n,m;
string s,t;
///Recursive
ll solve(ll i,ll j)
{
    if(i==n || j==m)
        return 0;
    ll& ans=dp[i][j];
    if(ans!=-1)

        return ans;
    ans=0;
    if(s[i]==t[j])
    {
        ans=1+solve(i+1,j+1);
         //cout<<i<<' '<<j<<' '<<s[i]<<' '<<t[j]<<' '<<ans<<endl;
    }
    else
    {
        ans=solve(i+1,j);///i tomo index na niye
        // cout<<i<<' '<<j<<' '<<s[i]' '<<t[j]<<' 'ans<<endl;
        ans=max(ans,solve(i,j+1));///j tomo index na niye;
    }
    return ans;
}
///Iterative
ll solve()
{
    for (int i = 0; i < n; i++)
        dp[i][m] = 0;
    for (int j = 0; j < m; j++)
        dp[n][j] = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            if (s[i] == t[j])
            {
                dp[i][j] = 1 + dp[i + 1][j + 1];
            }
            else
            {
                dp[i][j] = dp[i + 1][j];
                dp[i][j] = max(dp[i][j], dp[i][j + 1]);
            }
        }
    }

    return dp[0][0];
}
int main()
{

    cin>>s>>t;
    n=s.size();
    m=t.size();

    ///Recursive version
    memset(dp,-1,sizeof(dp));
    cout<<solve(0,0)<<endl;

    ///Iterative version
    cout<<solve()<<endl;
}
/*
HELLOM
HMRLL
*/
