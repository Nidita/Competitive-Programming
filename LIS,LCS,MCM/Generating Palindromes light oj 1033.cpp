#include <bits/stdc++.h>
#define mx 105
using namespace std;
string s;
int dp[mx][mx];
int lcs(int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
   if(s[i]==s[j])
   {
        dp[i][j]=lcs(i+1,j-1);
   }
   else
   {
        dp[i][j]=1+min(lcs(i+1,j),lcs(i,j-1));
   }
   return dp[i][j];
}

int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<j++<<": "<<lcs(0,s.size()-1)<<endl;
        s.clear();

    }
}
