#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,j=1;
    cin>>t;
    while(t--)
    {
               long long a,b,c,d;
              cin>>a>>b>>c>>d;
              long long p=a,q=b,k=0,i=5,s=0,m=0,n=0;
               while(p/i!=0)
        {
            k+=p/i;
            i*=5;
        }
        i=5;
        while(q/i!=0)
        {
            k-=q/i;
            i*=5;
        }
        i=5;
        p=a;
        q=b;
         while((p-q)/i!=0)
        {
            k-=(p-q)/i;
            i*=5;
        }
     //   cout<<k<<endl;
          p=a;
        q=b;
        i=2;
             while(p/i!=0)
        {
            s+=p/i;
            i*=2;
        }
        i=2;
        while(q/i!=0)
        {
            s-=q/i;
            i*=2;
        }
        i=2;
        p=a;
        q=b;
         while((p-q)/i!=0)
        {
            s-=(p-q)/i;
            i*=2;
        }
      //  cout<<s<<endl;
        p=c;
        while(p%2==0)
        {
          m++;
          p/=2;

        }
      m*=d;
   //  cout<<m<<endl;
         p=c;
        while(p%5==0)
        {
          n++;
          p/=5;

        }
       n*=d;
      // cout<<n<<endl;
    cout<<"Case "<<j++<<": "<<min(k+n,s+m)<<endl;
    }
}
