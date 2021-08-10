#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[n+1];
    for(int i=0;i<=n;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            cnt[j]++;
        }
    }
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(cnt[i]==i)
        {


        mx=max(mx,cnt[i]);
        }

    }
    cout<<mx<<endl;

}
