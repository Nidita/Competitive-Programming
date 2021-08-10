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
        int j=0,k=n-1,i=0;
        vector<int>v;
        while(j<=k)
        {
            if(i%2==0)

            {
                v.push_back(arr[j]);
                j++;
            }
            else
            {
                v.push_back(arr[k]);
                k--;
            }
            i++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<endl;
    }
}
