#include<bits/stdc++.h>
using namespace std;


vector<int>z_function(string s)
{
    int n = s.size();
    vector<int>z(n);
    for(int i = 1, l = 0, r = 0; i < n; i++)
    {
        if(i<=r)
            z[i] = min(r-i+1, z[i-l]);
        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
            z[i]++;
        if(i+z[i]-1>r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return  z;
}
int main()
{

    string s;
    while(cin>>s)
    {
      string x=s;
      reverse(x.begin(),x.end());
      x+="#";
      x+=s;
      vector<int>z=z_function(x);

      int l=s.size();
      int ans=l;
      for(int i=l;i<x.size();i++)
      {
          if(z[i]+(i-(l+1))==l)
          {
              ans=z[i];
              break;
          }
      }
      cout<<s;
      ans=l-ans;
      if(ans>0)
      {
          for(int i=ans-1;i>=0;i--)
          {
              cout<<s[i];
          }
      }
      cout<<endl;
    }
}
