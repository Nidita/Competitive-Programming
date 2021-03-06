#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define MAX 32000
vector<int>primes;
void seive()
{
    bool isprime[MAX+1];
    for(int i=1;i<=MAX;i++)
    {
        isprime[i]=true;
    }
    for(int i=3;i*i<=MAX;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i*i;j<=MAX;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<=MAX;i+=2)
    {
        if(isprime[i])
        {
            primes.push_back(i);
           // cout<<i<<" ";
        }
    }
}
void segseive(ll l,ll r)
{
    bool isprime[r-l+1];
    for(int i=0;i<r-l+1;i++)
    {

            isprime[i]=true;
            }
            for(int i=0;primes[i]*primes[i]<=r;i++)
            {
                int currentprime=primes[i];
                ll base=(l/currentprime)*currentprime;
                if(base<l)
                {
                    base=base+currentprime;
                }
                for(int j=base;j<=r;j+=currentprime)
                {
                    isprime[j-l]=false;
                    if(base==currentprime)
                    {
                        isprime[base-l]=true;
                    }
                }
            }
            for(int i=0;i<r-l+1;i++)
            {
                if(isprime[i])
                {
                    cout<<i+l<<endl;
                }
            }

}
int main()
{
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==1)
        {
            a=2;
        }
         segseive(a,b);
         cout<<endl;
    }
   // segseive(2,10);

}
