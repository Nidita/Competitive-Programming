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

    for(int i=1;i<n;i++)
    {
        mn=min(mn,max(arr[i-1]-arr[0],arr[n-1]-arr[i]));
    }
    cout<<mn<<endl;
    }

}
