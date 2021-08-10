#include <bits/stdc++.h>

using namespace std;
vector<long long >primes;
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
long long  NOD(long long n)
{
   long long c=0,sum=1;
   for(long long i=0;i<primes.size() && primes[i]*primes[i]<=n;i++)
    {
        if(primes[i]<=n)
        {
        while(n%primes[i]==0)
        {
            c++;
            n/=primes[i];
        }
        c++;

        sum*=c;
        c=0;
        }
        else
        {
            break;
        }
    }
    if(n!=1)
    {
        sum*=2;
    }
    return sum;

}

int main()
{
SieveOfEratosthenes(1000000);
long long t,j=0;
cin>>t;
while(t--)
{
    long long n;
   scanf("%lld",&n);


        printf("Case %lld: %lld\n",++j,NOD(n)-1);
}
}
