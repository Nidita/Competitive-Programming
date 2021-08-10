#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[2*n][2*n];
         int dp[2*n][2*n];
        for(int i=0;i<n;i++)
        {
         for(int j=0;j<=i;j++)
         {
             cin>>arr[i][j];
             //cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
         }
        }
        for(int i=n;i<2*n-1;i++)
        {
            for(int j=0;j<2*n-1-i;j++)
            {
                cin>>arr[i][j];
                // cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;

            }
        }
      memset(dp,-1,sizeof(dp));
        dp[0][0]=arr[0][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
               if(j==0)
               {
                   dp[i][j]=max(dp[i][j],dp[i-1][j]+arr[i][j]);
               }
               else if(i==j)
               {
                  dp[i][j]=max(dp[i][j],dp[i-1][j-1]+arr[i][j]);
               }
               else
               {
                   dp[i][j]=max(dp[i][j],max(dp[i-1][j]+arr[i][j],dp[i-1][j-1]+arr[i][j]));


            }
        //  cout<<dp[i][j]<<" ";
        }
       // cout<<dp[i][j]<<" ";
// cout<<endl;

    }
    for(int i=n;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1-i;j++)
        {
            dp[i][j]=max(dp[i][j],max(dp[i-1][j]+arr[i][j],dp[i-1][j+1]+arr[i][j]));
              //  cout<<dp[i][j]<<" ";
        }
         // cout<<endl;
    }
    cout<<"Case "<<k++<<": "<<dp[2*n-2][0]<<endl;
   // cout<<endl;
    }
}
