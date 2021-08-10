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
using namespace std;

vector<int>z_function(string s)
{
    int n = s.size();
    vector<int>z(n);
  for(int i=0;i<n;i++)
  {
      z[i]=0;
  }
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
        {


            z[i] = min(r-i+1, z[i-l]);

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
    int t;
    string pat,str;

     while(cin>>t)
     {
cin>>pat>>str;

    string T=pat+'#'+str;


int p=1;

   vector<int>z= z_function(T);

    for(int i=0;i<T.size();i++)
    {
      if(z[i]==t)
      {
          p=0;
         cout<<i-t-1<<endl;
      }
    }
  if(p==1)
  {
      cout<<endl<<endl;
  }

     }



    return 0;
}

