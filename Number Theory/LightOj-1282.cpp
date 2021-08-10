#include <bits/stdc++.h>
using namespace std;
 long long bigmod(long long n,long long k,long long m)
    {
        if(k==0)
        {
            return 1;
        }
        long long a=bigmod(n,k/2,m);
        a=(a*a)%m;
        if(k%2==1)
        {
            a=(a*n)%m;
        }

        return a;
    }
    long long first_three(long long n,long long k,long long m)
    {
       long long  a=1+(k*(log10(n))) ;
       double b=pow(10,(k*log10(n))-a+m);

       long long c=b;

      return c;
    }
int main()
{
    int t,j=1;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n>>k;
   cout<<"Case "<<j++<<": ";
//long long p=bigmod(n,k,1000);
      printf("%d ",first_three(n,k,3));
       printf("%03d\n",bigmod(n,k,1000));

    }
}
