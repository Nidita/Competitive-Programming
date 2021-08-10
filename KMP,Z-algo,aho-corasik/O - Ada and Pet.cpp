///O(n+m)
/*
    'i'th position has 'z[i]' length prefix
    a a a a a
    0 4 3 2 1 -> z array
    --------------
    a a a b a a b
    0 2 1 0 2 1 0
    --------------
    a b a c a b a
    0 0 1 0 3 0 1
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> z_function(string s)
{
    int n = s.size();
    vector<ll>z(n,0);
  for(int i=0;i<n;i++)
  {
      z[i]=0;
  }
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
        {


            z[i] = min((ll)(r-i+1), (ll)z[i-l]);

        }


        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
        {

            z[i]++;

        }

        if(i+z[i]-1>r)
        {
            l = i;
            r = i + z[i] - 1;
        }

    }
    return z;

}



int main()
{
    int t,n;
char c[500000+5];

   scanf("%d",&t);
     for(int k=1;k<=t;k++)
     {

    scanf("%s %d", c, &n);

  string T;
  int o=strlen(c);
  for(int i=0;i<o;i++)
  {
      T+=c[i];
  }


ll mx=0;
   vector<ll>z= z_function(T);
    for(int i=0;i<T.size();i++)
    {
        if(z[i]+i==T.size())
        {


      mx=max(mx,z[i]);
        }
    }

    printf("%lld\n",(ll)(n*T.size())-(ll)((n-1)*mx));

     }



    return 0;
}


