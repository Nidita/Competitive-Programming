#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

   int n,m;
   cin>>n>>m;
   ll a[n],b[n];
   int i;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   sort(a,a+n);
   ll g=0;
   for(i=1;i<n;i++)
   {
       g=__gcd(g,(a[i]-a[i-1]));
   }
   for(i=0;i<m;i++)
   {
       cout<<__gcd(g,a[0]+b[i])<<" ";
   }
    return 0;
}
