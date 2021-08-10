#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;


        for(int i=1;i<s.size();i++)
        {
          if(s[i]==s[i-1])
          {

          }
          else if(s[i]=='b' && s[i-1]=='a')
          {

          }
          else
          {
              s1+='b';
          }
        }
        if(s[s.size()-1]=='a')
        {
            s1+='a';
        }
        else
        {
            s1+='b';
        }
        int a=0,b=0;
    for(int i=0;i<s1.size();i++)
    {
       if(s1[i]=='a')
       {
           a++;
       }
       else
       {
           b++;
       }
    }
   // cout<<s1<<endl;
    if(a>0 && b>0)
    {
        cout<<"ba"<<endl;
    }
    else
    {
        if(a>0)
        {
            cout<<'a'<<endl;
        }
        else
        {
            cout<<'b'<<endl;
        }
    }



    }
}
