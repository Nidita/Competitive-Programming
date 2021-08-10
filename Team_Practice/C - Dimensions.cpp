#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s;

    int c=0,g=0,v=0;
    vector<string>gun,vag;
    for(int i=0;i<s.size();i++)
    {
         if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
         {
                p+=s[i];

         }
         else
            {
                if(c%2==0)
    {
        if(g==1 && !p.empty())
        {
            gun.push_back(p);

        }
        else if(v==1 && !p.empty())
        {
            vag.push_back(p);

        }

    }
    else
    {
        if(g==1 && !p.empty())
        {
            vag.push_back(p);

        }
        else if(v==1 && !p.empty())
        {
            gun.push_back(p);

        }

    }
                  cout<<c%2<<' '<<p<<' '<<g<<' '<<v<<endl;
                  p.clear();

            }

      if(s[i]=='(')
      {

          c++;
      }
      else if(s[i]==')')
      {


        c--;
      }
      else if(s[i]=='*')
      {

          g =1;
         v=0;
      }

      else if(s[i]=='/')
      {

          g =0;
         v=1;
      }



    }



}
