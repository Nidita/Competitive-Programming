#include <bits/stdc++.h>
using namespace std;
int main()
{
    string pattern ,s,s3;
    vector<int>v,vec,sign;
    cin>>pattern>>s;
    string s1,s2;

    char c=pattern[0];
    s1+=c;
    int cnt=0,sgn=0;
    for(int i=1;i<pattern.size()-1;i++)
    {
      if(pattern [i]=='*')
      {
          sgn=1;
      }
      else if(pattern[i]=='+')
      {
          sgn=1;
         cnt++;
      }
      else if(pattern [i]==c)
      {
          cnt++;
      }
      else
      {
          s1+=c;
          sign.push_back(sgn);
          sgn=0;
          v.push_back(cnt+1);
          cnt=0;
          c=v[i];
      }
    }
    if(cnt>0)
    {
         v.push_back(cnt+1);
          cnt=0;
           sign.push_back(sgn);
    }
    c=s[0];
    s2+=c;
    cnt=0;
    for(int i=1;i<s.size()-1;i++)
    {
      if(s[i]==c)
      {
          cnt++;
      }
      else
      {
          s2+=c;
          vec.push_back(cnt+1);
          cnt=0;
          c=v[i];
      }
    }
    if(cnt>0)
    {
         vec.push_back(cnt+1);
          cnt=0;
    }
    int i=0,j=0;

    while(j!=s1.size() || i!=s2.size())
    {
        if(s1[j]==s2[i])
        {
            if(sign[j]==1)
            {
                int k=max(v[j],vec[i]);
                cout<<k<<endl;
            }
        }
        else
        {
            int k=v[j];
            cout<<k<<endl;

        }
    }
    cout<<s3<<endl;


}
