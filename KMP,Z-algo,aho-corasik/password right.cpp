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


            z[i] = min((r-i+1), z[i-l]);

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
   string T;
   cin>>T;

int p=-1;
   vector<int>z= z_function(T);
   vector<int>vec,v;

    for(int i=0;i<T.size();i++)
    {




          v.push_back(z[i]);

    }
sort(v.begin(),v.end());
for(int i=v.size()-1;i>=0;i--)
{
    if(i+z[i]==T.size())
    {


    int l=lower_bound(v.begin(),v.end(),z[i])-v.begin();
    if(T.size()-l>1)
    {

        p=max(p,z[i]);

    }
    }






}
if(p==-1)
{
    cout<<"Just a legend"<<endl;
}
else
{
    for(int i=0;i<p;i++)
    {
        cout<<T[i];
    }
}

    return 0;
}

