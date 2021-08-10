
#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
void SieveOfEratosthenes(int n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++)
       if (prime[p])
         primes.push_back(p);
}
int  SOD(int n)
{
    int i=0,c=1,sum=1;
    while(primes[i]<=n)
    {
        while(n%primes[i]==0)
        {
            c*=primes[i];
            n/=primes[i];
        }
        c*=primes[i];

        sum*=((c-1)/(primes[i]-1));
        c=1;
        i++;
    }
    return sum;

}

int main()
{

    SieveOfEratosthenes(1000000);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<SOD(n)-n<<endl;
    }

}

