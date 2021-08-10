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

vector<ll>z_function(vector<ll>s)
{
    int n = s.size();
    vector<ll>z(n);
  for(int i=0;i<n;i++)
  {
      z[i]=0;
  }
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
        {


            z[i] = min((ll)(r-i+1), z[i-l]);

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
   int n,m;
   cin>>n>>m;
   ll a[n],b[m];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<m;i++)
   {
       cin>>b[i];
   }
vector<ll> T;
int cnt=0;
for(int i=0;i<m-1;i++)
{
    T.push_back(b[i+1]-b[i]);
    cnt++;


}
T.push_back(1000000008);
for(int i=0;i<n-1;i++)
{
    T.push_back(a[i+1]-a[i]);


}
/*for(int i=0;i<T.size();i++)
{
    cout<<T[i];
}

cout<<endl;
*/
int cnt1=0;


   vector<ll>z= z_function(T);

    for(int i=0;i<T.size();i++)
    {
      if(z[i]==cnt)
      {
          cnt1++;
      }
    }
if(m==1)
    {
        printf("%d\n",n);

    }
    else if(n==1)
    {
        printf("0\n");

    }
else{

   cout<<cnt1<<endl;
}



    return 0;
}


