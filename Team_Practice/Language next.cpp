#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c1=0;
    cin>>n;
    map<string,string>m;
    string s2;
    char c[]={';',',','.','!','?','(',')'};
    while(n--)
    {
        string s,s1;
        getline(cin,s);

        for(int i=0;i<s.size();i++)
        {
          for(int j=0;j<7;j++)
          {
              if(s[i]==c[j])
              {
                  c1++;

                  if(c1==1)
                  {
                      s2=s1;
                      s1.clear();
                  }
                  else
                  {
                      m[s1]=s2;
                  }
              }
              else
              {
                  s1+=s[i];
              }
          }
        }
          if(s1.size()!=0)
          {
              m[s1]=s2;
          }
          s1.clear();
          c1=0;

        }



}
