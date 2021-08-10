#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli n,k,ans;
lli d[33000][20];
lli dp(lli last_used,lli mask)
{
    if(mask==((1<<n)-1))
    {return 1;
    }
  lli &ans=d[mask][last_used];
  if(ans!=-1) return ans;
  ans=0;

    for(lli i=1;i<=n;i++)
    {
       if(!(mask&(1<<(i-1))) && abs(i-last_used)<=k)
       {
         ans+=dp(i,mask|(1<<(i-1)));
       }
    }
    return ans;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        lli sum=0;
        memset(d,-1,sizeof(d));
      for(int i=1;i<=n;i++)
      {
          sum+=dp(i,1<<(i-1));
      }
      cout<<sum<<endl;
    }
}
