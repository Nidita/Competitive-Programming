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
        vector<long long>v;
        long long sum=0,s=1;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            s=1;
            int l=upper_bound(v.begin(),v.end(),v[i]+2)-v.begin();
            int y=l-i-1;


            if(y%2==0)
            {
                s*=y/2;
                s*=(y-1);
            }
            else
            {
               s*=(y-1)/2;
                s*=y;
            }
           sum+=s;
        }

        cout<<sum<<endl;
    }
}
