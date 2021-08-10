#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int h[n];
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        int mn=h[0],mx=h[0];
        int ok=1;
        for(int i=1;i<n-1;i++)
        {
            mn=max(h[i],mn-(k-1));
            mx=min(h[i]+(k-1),mx+(k-1));
            if(mn>mx)
            {
                ok=0;
                break;
            }
        }
        if(ok==1)
        {
            if(h[n-1]>=(mn-(k-1))&& h[n-1]<=mx+(k-1))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
