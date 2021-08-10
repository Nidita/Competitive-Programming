

#include<bits/stdc++.h>
using namespace std;

const int maxn = 62500;
const int INF = 1000000000;
int s[maxn],g[maxn],d[maxn];
int num [maxn];

int main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        int N,p,q,x;
        cin>>N>>p>>q;
        memset(num,0,sizeof(num));
        for(int i=1;i<=p+1;i++)
        {
            cin>>x;
            num[x]=i;
        }
        int n=0;
        for(int i=0;i<q+1;i++)
        {
            cin>>x;
            if(num[x])
            {
                s[++n]=num[x];
            }
        }


        for(int i=1;i<=n;i++)
        {
            g[i]=INF;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int k=upper_bound(g+1,g+n+1,s[i])-g;
            d[i]=k;
            g[k]=s[i];
            ans=max(ans,d[i]);
        }
        cout<<"Case "<<cs<<": "<<ans<<endl;
    }
    return 0;
}

