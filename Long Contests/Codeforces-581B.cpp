#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n;
    vector<int>v;
     vector<int>vec;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    h=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(v[i+1]>h)
     {
         h=v[i+1];
     }
        if(v[i]>h)
        {
           vec.push_back(0);
        }
        else
        {
              vec.push_back(h+1-v[i]);

        }


    }
    reverse(vec.begin(),vec.end());
    vec.push_back(0);
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
}
