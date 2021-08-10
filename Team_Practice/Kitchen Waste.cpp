#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    ll arr[n],brr[m];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    ll sum=0,waste=0;
    for(int i=0;i<m;i++)
    {
       cin>>brr[i];

    }
    int i=0,j=0;
    for(int i=0;i<n;i++)
    {

        if(sum+arr[i]>brr[j])
        {
             waste+=brr[j]-sum;
             sum=0;
            j++;

        }
        sum+=arr[i];

    }

  waste+=brr[j]-sum;
  for(int i=j+1;i<m;i++)
  {
      waste+=brr[i];
  }
  cout<<waste<<endl;

}
