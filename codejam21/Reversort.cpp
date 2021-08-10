#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                cnt++;
                if(arr[j]<arr[i])
                {
                    cnt++;
                    swap(arr[i],arr[j]);
                }
            }
        }
        cout<<cnt<<endl;
    }
}
