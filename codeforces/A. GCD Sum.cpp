#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

       while(1)
       {
           ll s=0,m=n;
           while(m!=0)
           {
               s+=m%10;
               m/=10;

           }
           if(__gcd(n,s)>1)
           {
               cout<<n<<endl;
               break;
           }
           n+=1;
       }
    }
}
