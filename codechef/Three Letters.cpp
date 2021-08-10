#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int>m;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int one=0,two=0;
          for(char i='a';i<='z';i++)
        {
          two+=m[i]/2;
          one+=m[i]%2;
        }
      if(one<=two)
      {
          ans+=one;
          two-=one;
            ans+=((two/3)*2);
          if(two%3==2)
          {
              ans+=1;
          }
      }
      else
      {
          ans=two;
      }
      cout<<ans<<endl;

    }
}
