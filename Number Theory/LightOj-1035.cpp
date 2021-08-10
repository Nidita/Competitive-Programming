#include<bits/stdc++.h>
#define pi acos(-1.0)
#define bsort(v) sort(v.begin(),v.end())
#define pb push_back
#define mp make_pair
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define N 1001
#define F first
#define S second
#define MAX 500050
#define ALL(v) v.begin(),v.end()



using namespace std;
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> pii;




vector<int>prime;
bool flag[N+2];

void seive()
{
    for(int i=3; i*i<=N; i+=2)
    {
        if(!flag[i])
        {
            for(int j=i*i; j<N; j+=i)
                flag[j]=1;
        }
    }
    prime.pb(2);
    for(int i=3; i<=N; i+=2)
        if(!flag[i])
            prime.pb(i);
}

int primefactor[N];
void facto(int n)
{
    int sq=sqrt(n);
    for(int i=0;i<prime.size()&&prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                primefactor[prime[i]]++;
                n/=prime[i];
            }
            sq=sqrt(n);
        }
    }
    if(n>1)
        primefactor[n]++;
}

int main()
{
    seive();
    FAST
    int tc;
    scanf("%d",&tc);
    int z=0;
    while(tc--)
    {
        z++;
        int n;
        scanf("%d",&n);
        for(int i=2;i<=n;i++)
        {
            facto(i);
        }
        for(int i=0,f=1;i<100;i++)
        {
            if(primefactor[prime[i]]>0)
            {
                if(f)
                {
                    printf("Case %d: %d = %d (%d)",z,n,prime[i],primefactor[prime[i]]);
                    f=0;
                }
                else
                    printf(" * %d (%d)",prime[i],primefactor[prime[i]]);
            }
        }
        printf("\n");
        memset(primefactor,0,sizeof primefactor);

    }
}
