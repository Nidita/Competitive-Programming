
#include<bits/stdc++.h>
#define MAXN 10000000
typedef long long ll;
int T;
ll prime[MAXN/10];
bool vis[MAXN+10];
inline void SieveOfEratosthenes(){
    vis[1]=true;
    for(int i=2;i<=MAXN+10;i++){
        if(!vis[i]) prime[++prime[0]]=i;
        for(int j=1;j<=prime[0]&&i*prime[j]<=MAXN;j++){
            vis[i*prime[j]]=true;
            if(i%prime[j]==0) break;
        }
    }
}
inline ll pairsOFlcm(ll n){
    ll ret=1;
    for(int i=1,cnt;i<=prime[0]&&prime[i]*prime[i]<=n;i++) if(n%prime[i]==0){
        cnt=0;
        while(n%prime[i]==0) cnt++,n/=prime[i];
        ret*=((cnt*2)+1);
    }
    if(n>1) ret*=3;
    return (ret+1)/2;
}
int main(){
    ll n;
    SieveOfEratosthenes();
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%lld",&n);
         printf("Case %d: %lld\n",i, pairsOFlcm(n));
    }
    return 0;
}
