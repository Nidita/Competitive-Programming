#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ok[k+1];
    for(int i=1;i<=k;i++)
    {
        ok[i]=1;
    }
    ok[k]=0;
    for(int i=0;i<n;i++)
    {
        int a;
        string s;
        cin>>a>>s;
        if(s=="SAFE")
        {
            for(int j=a;j>=1;j-- )
            {
                ok[j]=1;
            }
        }
        else
        {
             for(int j=a;j<=k;j++ )
            {
                ok[j]=0;
            }
        }
    }
    for(int i=k;i>=1;i--)
    {
        if(ok[i]!=0)
        {
            cout<<i<<' ';
            break;
        }
    }
     for(int i=1;i<=k;i++)
    {
        if(ok[i]!=1)
        {
            cout<<i<<' ';
            break;
        }
    }

}
