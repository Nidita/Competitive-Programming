#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n, s,o=-1;
        cin>>n>>s;
        long long arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        long long sum[n];
        sum[0] = arr[0];

        for(int i=1; i<n; i++)
        {
            sum[i] = sum[i-1] + arr[i];
        }

        for(int i=0; i<n; i++) {
            if((sum[i]+(((n-1)-i)*arr[i])==s)) {
              o=arr[i];
                break;
            }
        }
     cout<<o<<endl;
    }

}
