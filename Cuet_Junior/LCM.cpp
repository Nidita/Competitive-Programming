#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
vector<ll>primes;

void SieveOfEratosthenes(ll n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)
	{
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples of p
			for (ll i=p*2; i<=n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (ll p=2; p<=n; p++)
	if (prime[p])
		primes.push_back(p) ;
}

// Driver Program to test above function
int main()
{

	SieveOfEratosthenes(1000006);
	//cout<<primes.size()<<endl;
	int t;
	cin>>t;
	while(t--)
    {
        ll n,o=1;
        cin>>n;
        for(int i=0;i<primes.size();i++)
        {
            if(n%primes[i]==0)
            {
                o=n/primes[i];
                break;
            }
        }
        cout<<((n%mod)*(o%mod))%mod<<endl;
    }
	return 0;
}

