#include <bits/stdc++.h>
using namespace std;
vector<long long >primes;
long long B=10000019,d=1;
void SieveOfEratosthenes(long long n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (long long p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (long long i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (long long p=2; p<=n; p++)
       if (prime[p])
         primes.push_back(p);
}
map<long long,long long>m;

void factorizatinOFfactorial(long long n,long long p)
{

    for(int i=0;primes[i]<=n &&i <primes.size();i++)
    {
        int s=primes[i],k=0,j;
        j=s;
        while(n/s!=0)
        {
            k+=n/s;
            s*=primes[i];
        }

//cout<<k<<' '<<p<<endl;


        for(long long o=1;o<=k/p;o++)
        {

       d=(d*j)%B;

        }

       // cout<<d<<endl;

    }
    if(d%B==1)
    {
        printf("-1");
    }
    else{
    printf("%lld",d%B);
    }
}

int main()
{
    SieveOfEratosthenes(1000000);
    int t,j=0;
scanf("%d",&t);
    while(t--)
    {
        long long a,b;
       scanf("%lld%lld",&a,&b);
        d=1;
        printf("Case %d: ",++j);
       factorizatinOFfactorial(a,b);
       printf("\n");
    }
}
