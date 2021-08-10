#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;
    int i=0,j=0;
    int dp[m+5][2];
    while(j!=m)
    {
        if(s[i]==t[j])
        {
           // cout<<s[i]<<' '<<i<<' '<<j<<endl;
            dp[j][0]=i;
            j++;
        }
        i++;
    }

    i=n-1;
    j=m-1;
    while(j>=0)
    {
      if(s[i]==t[j])
        {
            dp[j][1]=i;
            j--;
        }
        i--;
    }
    int mx=0;
   for(int i=1;i<m;i++)
   {
       mx=max(mx,dp[i][1]-dp[i-1][0]);
   }
   cout<<mx<<endl;

}
