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
        int l;
        cin>>l;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(!binary_search(v.begin(),v.end(),arr[i]))
            {


            int pos=upper_bound(v.begin(),v.end(),arr[i])-v.begin();
            if(pos==v.size())
            {
                v.push_back(arr[i]);
            }
            else{
                v[pos]=arr[i];
            }
        }
        }
        if(v.size()<l)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<v[l-1]<<endl;
        }
    }
}
