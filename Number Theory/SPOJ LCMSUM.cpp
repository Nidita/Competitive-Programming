#include <bits/stdc++.h>



using namespace std;
typedef long long vlong;

vlong res[1000010];
vlong phi[1000010];

void precal( int n ) {

   for(vlong i = 1; i <= n ; ++i) phi[i] = i;
    for(vlong i = 2; i <= n ; ++i)  {
        if ( phi[i] == i ) {
        for ( int j = i; j <= n; j += i ) {
            phi[j] /= i;
            phi[j] *= i - 1;
        }
    }
 }


 for(vlong i = 1; i <= n ; ++i){
    for ( int j = i; j <= n; j += i ) {
        res[j] += ( i * phi[i] );
    }
 }
}
int main () {
    precal( 1000000 );

    int t;
    scanf ( "%d", &t );

    while (t-- ) {
        vlong n;
        scanf ( "%lld", &n );


        vlong ans = res[n] + 1;
        ans *= n;
        ans /= 2;

        printf ( "%lld\n", ans );
    }

    return 0;
}
