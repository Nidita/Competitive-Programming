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
int main()
{
    SieveOfEratosthenes(1000000);
    int a,b,n,temp,total=1,res=0;
    scanf("%d%d%d",&a,&b,&n);
    int count=0,i,j,k;
    for(i=a;i<=b;i++)
    {
        temp=i;
        total=1;
        k=0;
        for(j=primes[k];j*j<=temp;j=primes[++k])
        {
            count=0;
            while(temp%j==0)
            {
                count++;
                temp/=j;
            }
            total *=count+1;
        }
        if(temp>1)
            total*=2;
        if(total==n)
            res++;
    }
    printf("%d\n",res);
    return 0;
}
