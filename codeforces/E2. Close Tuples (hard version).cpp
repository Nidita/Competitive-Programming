#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 300500;
const int mod = 1000000007;
ll fact[N];
ll invFact[N];

ll fast_pow(ll a, ll p) {
    ll res = 1;
    while (p) {
        if (p % 2 == 0) {
            a = (a * a) % mod;
            p /= 2;
        } else {
            res = (res * a) % mod;
            p--;
        }
    }
    return res;
}

ll C(int n, int k) {
    if (k > n) {
        return 0;
    }
    return fact[n] * invFact[k] % mod * invFact[n - k] % mod;
}


int main()
{
    int t;
    cin>>t;
   fact[0] = invFact[0] = 1;
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
        invFact[i] = fast_pow(fact[i], mod - 2);
    }


while(t--)
    {
        long long a,b;
        int n;
        long long m,k,sum=0;
        cin>>n>>m>>k;
     vector<long long>v;
        for(int i=0;i<n;i++)
        {
           long long x;
           cin>>x;
           v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
        int l=upper_bound(v.begin(),v.end(),v[i]+k)-v.begin();
        a=l-i-1;
        b=m-1;
           sum = (sum + C(a, b)) % mod;
        }


cout<<sum<<endl;

    }

}

