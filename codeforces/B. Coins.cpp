#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s[6]={"ABC","ACB","BAC","BCA","CBA","CAB"};
    string s1[3];
    for(int i=0;i<3;i++)
    {
        cin>>s1[i];
    }
int ok=0, l,u;
    for(int i=0;i<6;i++)
    {
         ok=1;

      //  cout<<s[i]<<endl;
        for(int j=0;j<3;j++)
        {


                for(int k=0;k<3;k++)
                {
                    if(s[i][k]==s1[j][0])
                    {
                        l=k;
                    }
                }
                  for(int k=0;k<3;k++)
                {
                    if(s[i][k]==s1[j][2])
                    {
                        u=k;
                    }
                }
                if(s1[j][1]=='<')
                {
                    if(l>u)
                    {
                        ok=0;
                        break;
                    }
                }
                else
                {
                     if(l<u)
                    {
                        ok=0;
                        break;
                    }
                }

        }
        if(ok==1)
        {
            cout<<s[i]<<endl;
            break;
        }


        }
        if(ok!=1)
        {
            cout<<"Impossible"<<endl;
        }






}
