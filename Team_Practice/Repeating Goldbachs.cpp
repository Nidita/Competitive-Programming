
// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
vector<int>primes;

void SieveOfEratosthenes(int n)
{
	// Create a boolean array
	// "prime[0..n]" and initialize
	// all entries it as true.
	// A value in prime[i] will
	// finally be false if i is
	// Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples
			// of p greater than or
			// equal to the square of it
			// numbers which are multiple
			// of p and are less than p^2
			// are already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			primes.push_back(p);
}

// Driver Code
int main()
{

	SieveOfEratosthenes(1000006);
	//cout<<primes.size()<<endl;
	int k;
	cin>>k;
	int c=0;
	while(k>=4)
    {
        for(int i=0;primes[i]+primes[i]<=k && i<primes.size();i++)
        {
            if(binary_search(primes.begin(),primes.end(),k-primes[i]))
            {
                int l=lower_bound(primes.begin(),primes.end(),k-primes[i])-primes.begin();

                k=primes[l]-primes[i];
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;
	return 0;
}

