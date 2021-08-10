#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
long long mu[mx];

vector<long long>prime;

bool vis[mx];

void sieve() {
    long long x=sqrt((long long)mx);
    for(long long i=3; i<=x; i+=2) {
        if(vis[i]==0) {
            for(long long j=i*i; j<mx; j+=2*i)
                vis[j]=1;
        }
    }
    prime.push_back(2);
    for(long long i=3; i<mx; i+=2)
        if(vis[i]==0)
            prime.push_back(i);
}

void mobius() {
    for(long long i=1; i<mx; i++) mu[i]=1;
    long long root=sqrt((long long)mx);
    for(long long i=0; i<prime.size() && prime[i]<=root; i++) {
        long long x=prime[i];
        x=x*x;
        for(long long j=x; j<mx; j+=x)
            mu[j]=0;
    }
    for(long long i=0; i<prime.size(); i++) {
        long long x=prime[i];
        for(long long j=x; j<mx; j+=x)
            mu[j]*=-1;
    }
}

int main()
{
    sieve();
    mobius();
    int t,j=0;
    scanf("%d",&t);
    while(t--)
    {
       long long n,m,ans=0;
        scanf("%lld %lld",&n,&m);
        if(n>m)
        {
            swap(n,m);
        }
        for(long long i=1;i<=n;i++)
        {
            ans+=mu[i]*(n/i)*(m/i);

        }
        if(n)ans++;
        if(m)ans++;
       printf("Case %d: %lld\n",++j,ans);

    }
}
