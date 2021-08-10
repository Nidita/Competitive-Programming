#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mx=0;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]<=arr[j+1])
            {
               // cout<<'*'<<' ';
                cnt++;
            }
            else
            {
                break;
            }
        }
         for(int j=i+1;j<n;j++)
        {
            //  cout<<'%'<<' ';
            if(arr[j]<=arr[j-1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        mx=max(cnt+1,mx);
    }
    cout<<mx<<endl;
}

