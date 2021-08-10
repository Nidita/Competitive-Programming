#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ms(a,b) memset(a, b, sizeof a);
#define scd(n) scanf("%d",&n)
#define scld(n) scanf("%lld",&n)
#define lp(i,a,b) for(i=a; i<b; i++)
const int INF = 0x3f3f3f3f;
#define MOD 1000000009
int leyar (ll n)
{
    int sq = sqrt(n);
    if((sq*sq)==n)
    {
        if(sq&1)
            return ((sq-1)/2);
        else
            return (sq/2);
    }
    else
    {
        if(sq&1)
            return (sq+1)/2;
        else
        {
            return sq/2;
        }
    }
}

int main()
{
    ll a, b; cin>>a>>b;
    int lyra = leyar(a), lyrb = leyar(b);

    int x1, y1, x2, y2;
    y1 = -1*lyra;
    x1 = y1 +1;

    y2 = -1*lyrb;
    x1 = y1+1;


    return 0;
}




