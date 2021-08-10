#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define MAX 320000
vector<ll>primes;
vector<ll>primessquare;
void seive()
{
    bool isprime[MAX+1];
    for(ll i=1;i<=MAX;i++)
    {
        isprime[i]=true;
    }
    for(ll i=3;i*i<=MAX;i+=2)
    {
        if(isprime[i])
        {
            for(ll j=i*i;j<=MAX;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    primes.push_back(2);
     primessquare.push_back(4);
    // cout<<4<<" ";
    for(ll i=3;i<=MAX;i+=2)
    {
        if(isprime[i])
        {
            primes.push_back(i);
            primessquare.push_back(i*i);
           // cout<<i*i<<" ";
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
        ll l=upper_bound( primessquare.begin(), primessquare.end(),b)- primessquare.begin();
        ll u=upper_bound( primessquare.begin(), primessquare.end(),a)- primessquare.begin();
ll ans,x=0;
ans=max(u-l,x);
        cout<<u<<" "<<ans<<endl;
    }

}
