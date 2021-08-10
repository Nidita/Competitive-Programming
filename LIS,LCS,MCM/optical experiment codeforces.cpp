
#include<bits/stdc++.h>
using namespace std;

const int maxn = 1000006;
const int INF = 1000000000;
int s[maxn],g[maxn],d[maxn];
int num [maxn];

int main()
{

        int N,x;
        scanf("%d",&N);
        memset(num,0,sizeof(num));
        for(int i=1;i<=N;i++)
        {
             scanf("%d",&x);
            num[x]=i;
        }
        int n=N;
        for(int i=1;i<=N;i++)
        {
             scanf("%d",&x);
            if(num[x])
            {
                s[n--]=num[x];
            }
        }


        for(int i=1;i<=N;i++)
        {
            g[i]=INF;
        }
        int ans=0;
        for(int i=1;i<=N;i++)
        {
            int k=upper_bound(g+1,g+N+1,s[i])-g;
            d[i]=k;
            g[k]=s[i];
            ans=max(ans,d[i]);
        }
          printf("%d\n",ans);

    return 0;
}

