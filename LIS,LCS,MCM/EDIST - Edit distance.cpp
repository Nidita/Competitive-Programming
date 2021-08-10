#include <bits/stdc++.h>
#define mx 2005
using namespace std;
int dp[mx][mx];

int lcsIterative(string S, string W) {
    int n = S.size();
    int m = W.size();

     for(int i=0;i<=n;i++)
            dp[i][0] = i;
        for(int j=0;j<=m;j++)
            dp[0][j] = j;
        for(int i=1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(S[i-1] == W[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                    dp[i][j] = min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
            }
        }
    return dp[n][m];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    string a,b;

        cin>>a>>b;
        int p=a.size();
        int q=b.size();
        cout<<lcsIterative(a,b)<<endl;


    }

}

