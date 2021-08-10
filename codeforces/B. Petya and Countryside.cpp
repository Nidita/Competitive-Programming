#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mx=0;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i-1;i>=0;i--)
        {
            if(arr[j]<=arr[i])
            {
                cout<<1<<' ';
                cnt++;
            }
        }
         for(int j=i+1;i<n;i++)
        {
              cout<<2<<' ';
            if(arr[j]<=arr[i])
            {
                cnt++;
            }
        }
        mx=max(cnt,mx);
    }
    cout<<mx<<endl;
}
