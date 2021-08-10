#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define n 100000005
int prime[5761455+2];
unsigned mulofprime[5761455+5];
bitset<n>flag;


int sieve()
{
    flag.reset() ;
    for( int i=2 ; i*i<= n ; i++ ){
        if( !flag[i] ){
            for( int j = i*i ; j<= n ; j+=i){
                flag[j] = 1 ;
            }
        }
    }
    int k=0 ;
    for( int i=2 ; i<=n ; i++ )
        if( !flag[i] ) prime[k++]= i ;

    return k;
}



unsigned product(int a)
{
    int rep ;
    unsigned ans = 1;
    for(int i=0; prime[i]<=sqrt(a); i++)
    {
        rep = a; rep/=prime[i];
        while(rep>=prime[i])
        {
            rep/=prime[i]; ans*=(unsigned)prime[i];
        }
    }

    return ans;
}



int main()
{
    int k = sieve();
    for(int i=0; i<=k; i++)
    {
        if(i!=0) mulofprime[i] = mulofprime[i-1]*prime[i];
        else mulofprime[i] = prime[i];
    }
    int t;
    scanf("%d",&t);
    for(int j =1; j<=t; j++)
    {
        int a;
        scanf("%d",&a);
        int index = upper_bound(prime, prime+k, a)-prime;
        index--;
        unsigned result = mulofprime[index];
        result *= product(a);
        printf("Case %d: %u\n",j, result);
    }
    return 0;
}

