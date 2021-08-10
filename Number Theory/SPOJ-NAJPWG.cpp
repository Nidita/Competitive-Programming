#include<bits/stdc++.h>
using namespace std;
long long a[100005];
void phi(){
     long long k,i,z;
     a[0]=0;
     for(k=1;k<100001;k++){
      long long n=k;
      long long result=n;
        for(i=2;i*i<=n;i++){
          if (n%i==0)
           result-=result/i;
          while(n%i==0)
           n/=i;
       }
       if (n>1)
         result-=result / n;
       z=k-result;
       a[k]=a[k-1]+z;
   }
}
int main(){
    long long t,num,c=1;
    phi();
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&num);
        printf("Case %lld: %lld\n",c,a[num]);
        c++;
    }
    return 0;
}
