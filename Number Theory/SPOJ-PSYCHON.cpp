#include <bits/stdc++.h>

using namespace std;
vector<long long >primes;
long long even,odd;
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

int main()
{
    int t;
  SieveOfEratosthenes(1000000);

    scanf("%d",&t);
    while(t--)
    {
        int n;
        even=0;
        odd=0;

        scanf("%d",&n);

        for(int i=0;primes[i]*primes[i]<=n;i++)
        {
            if(n%primes[i]==0)
            {
                int coun=0;
                while(n%primes[i]==0)
                {
                    n/=primes[i];
                    coun++;
                }
                if(coun%2==0)
                   even++;
                else
                    odd++;
            }
        }
        if(n>1)
            odd+=1;
        if(even>odd)
            printf("Psycho Number\n");
        else
            printf("Ordinary Number\n");
    }

}
