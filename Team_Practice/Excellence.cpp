#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int j=n/2;
    int  k=j-1;
    int mn=arr[j]+arr[k];
    while(j<n&&k>=0 )
    {
        mn=min(mn,arr[j]+arr[k]);
        j++;
        k--;
    }
    cout<<mn<<endl;
}
