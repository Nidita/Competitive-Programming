#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
   ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   ll sum=0,sum1=0;
    for(int i=0;i<n;i++)
    {
        sum+=(i*arr[i]);
    }
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        sum1+=(i*arr[i]);
    }
    cout<<sum-sum1<<endl;
}

