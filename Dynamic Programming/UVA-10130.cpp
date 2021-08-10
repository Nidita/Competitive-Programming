#include <bits/stdc++.h>
using namespace std;
int weight[1005];
int price[1005];
int dp[1005][1005];
int n,CAP,p;
int func(int i,int w)
{
    if(i>=n)return 0;
        if(dp[i][w]!=-1)return dp[i][w];
        int p=0;
        if(w+weight[i]<=CAP)
            p=max(func(i+1,w+weight[i])+price[i],func(i+1,w));
        else
            p=func(i+1,w);
        return dp[i][w]=p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
memset(price,0,sizeof(price));
memset(weight,0,sizeof(weight));
        cin>>n;

        for(int i=0;i<n;i++)
        {
           cin>>price[i]>>weight[i];
        }
     /*   for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(weight[j]>weight[j+1])
                {
                    swap(price[j],price[j+1]);
                    swap(weight[j],weight[j+1]);
                }
            }
        }
         for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(weight[j]==weight[j+1])
                {
                    if(price[j]>price[j+1]){
                    swap(price[j],price[j+1]);
                    swap(weight[j],weight[j+1]);
                    }
                }
            }
        }*/
        int c,sum=0;
        cin>>c;
       // memset(dp,-1,sizeof(dp));
        for(int k=1;k<=c;k++){

        cin>>CAP;
          memset(dp,-1,sizeof(dp));
      sum+=func(0,0);
     // cout<<sum<<endl;

        }
        cout<<sum<<endl;
    }
}
