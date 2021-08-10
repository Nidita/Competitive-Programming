#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int cnt=0;
    while(1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]<=b[i])
            {
                b[i]-=a[i];
            }
            else
            {
                k-=(a[i]-b[i]);
                b[i]=0;
            }

        }
        if(k<0)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
