#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define endl "\n"
#define    rep(X,Y)     for(X=0;X<Y;X++)
#define    rep1(X,Y)    for(X=1;X<=Y;X++)
#define    rrep(X,Y)    for(X=Y-1;X>=0;X--)
#define    rrep1(X,Y)   for(X=Y;X>=1;X--)
#define ml ll T,g; cin>>T; for(g=0;g<T;g++)
#define case "Case "<<g+1<<": "
#define sf(T) scanf("%lld",&T)
#define pf(T) printf("%lld\n",T)
#define FastRead                      \
                                    ios_base::sync_with_stdio(false); \
                                    cin.tie(0);
#define pi acos(-1)
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,greater<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
ll prime[1000009];
ll x=0;
char sieve[1000009]={0};
void primeSieve()
{

    sieve[0] = sieve[1] = 1;
    prime[x++]=2;
    for (int i = 4; i <= 1000005; i += 2)
    {
        sieve[i] = 1;
    }
    int sqrtn = sqrt (1000005);
    for (int i = 3; i <= sqrtn; i += 2 )
    {
        if ( sieve[i] == 0 )
        {
            for (int j = i * i; j <= 1000005; j += 2 * i)
            {
                sieve[j] = 1;
            }
        }
    }
    for (int i = 3; i <= 1000005; i += 2)
    {
        if ( sieve[i] ==0)
        {
            prime[x++]=i;
        }
    }
}
int main()
{
    primeSieve();
   for(int i=0;i<x;i++)
   {
       cout<<prime[i]<<' ';
   }
   cout<<endl;
    ml
    {
        ll n,i,a=0;
        cin>>n;
        for(i=0;i<x&&i<=n;i++)
        {
            if(n%prime[i]==0)
            {
                a=prime[i];
                break;
            }
        }
        ll b=(n/a);
        cout<<(b*n)%1000000007<<endl;
    }
    return 0;
}

