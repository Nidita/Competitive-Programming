#include <bits/stdc++.h>
using namespace std;
using namespace std;
vector<long long >primes;
int g=0;
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
map<long long ,long long>m;
map<long long ,long long>m1;
set<long long >s;
set<long long >s1;
void primeFactorizationOfFactorial(long long n)
{
    for(int i=2;i<=n;i++)
    {
        int j=i,o=0;

        while(primes[o]*primes[o]<=j)
        {
            while(j%primes[o]==0)
            {
                j/=primes[o];
                m[primes[o]]++;
                s.insert(primes[o]);
            }


            o++;

        }
         if(j>1)
         {
             m[j]++;
              s.insert(j);


         }


    }
}
void FactorizationOfNumber(long long n)
{
    for(int i=0;i<primes.size()&& primes[i]*primes[i]<=n;i++)
    {
        while(n%primes[i]==0)
        {
            m1[primes[i]]++;
            s1.insert(primes[i]);
            n/=primes[i];
        }

    }
    if(n>1)
    {
        m1[n]++;
        s1.insert(n);

    }
}
set<long long>::iterator it;
long long   nFactorialdivisibleByD()
{
    for(it=s1.begin();it!=s1.end();it++)
    {

        if(m1[*it]>m[*it])
        {
            return -1;
        }
        else
        {
            m[*it]-=m1[*it];
        }
    }
    long long sum=1;
    for(it=s.begin();it!=s.end();it++)
    {

        sum*=(m[*it]+1);

    }
   return sum;
}
int main()
{
    SieveOfEratosthenes(1000000);

    while(1)
    {
        long a,b,c;
        cin>>a>>b;
        if(a==0 && b==0)
        {
            break;
        }

        primeFactorizationOfFactorial(a);

        FactorizationOfNumber(b);
        c=nFactorialdivisibleByD();
        if(c==-1)
        {
            cout<<0<<endl;
        }
        else{
        cout<<c<<endl;
        }

        m.clear();
        m1.clear();
        s.clear();
        s1.clear();

    }
}
