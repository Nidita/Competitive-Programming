#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll mn=arr[n-1]-arr[0];

    for(int j=1;j<n;j++)
    {
      ll mx=INT_MIN;
      for(int i=1;i<j;i++)
      {
          mx=max(mx,min(arr[i]-arr[0],arr[j]-arr[i]));
        //  cout<<mx<<' ';

      }
      mx=max(mx,arr[n-1]-arr[j]);
      cout<<mx<<' ';
      mn=min(mn,mx);
    }
  //  cout<<mn<<endl;
    }

}
