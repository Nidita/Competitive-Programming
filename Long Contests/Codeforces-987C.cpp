#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll infn=4000000000;
int main()
{
  ll n;
  cin>>n;
  ll s[n],c[n];
  for(int i=0;i<n;i++)
  {
      cin>>s[i];
  }
  for(int i=0;i<n;i++)
  {
      cin>>c[i];
  }

    vector<ll>c1(n,infn),c2(n,infn);
  for(int j=n-2;j>=1;j--)
  {
      for(int i=j-1;i>=0;i--)
      {
          if(s[j]>s[i]){
          c1[j]=min(c1[j],c[i]);
          }
      }
  }
   for(int j=1;j<n-1;j++)
  {
      for(int i=j+1;i<n;i++)
      {
          if(s[j]<s[i]){
          c2[j]=min(c2[j],c[i]);
          }
      }
  }
  ll ans=infn;
  for(int i=0;i<n;i++)
  {
      ans=min(ans,c2[i]+c[i]+c1[i]);
  }
  if(ans>=infn)
  {
      cout<<"-1"<<endl;
  }
  else{
  cout<<ans<<endl;
  }
}
