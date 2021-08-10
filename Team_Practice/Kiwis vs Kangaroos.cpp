#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>kan,kiwi;
    string s1="KANGAROO",s2="KIWIBIRD";
    for(int i=0;i<s1.size();i++)
    {

        kan[s1[i]]++;
       // cout<<kan[s1[i]]<<' ';
    }
     for(int i=0;i<s2.size();i++)
    {
        kiwi[s2[i]]++;
         // cout<<kiwi[s2[i]]<<' ';
    }
    string s;
    cin>>s;
    int score1=0,score2=0;
    for(int i=0;i<s.size();i++)
    {
           if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
   //   cout<<kan[s[i]]<<' '<<kiwi[s[i]]<<endl;
      score1+=kan[s[i]];
       score2+=kiwi[s[i]];


    }
    if(score1>score2)
    {
        cout<<"Kangaroos"<<endl;
    }
    else if(score1<score2)
    {
        cout<<"Kiwis"<<endl;
    }
    else
    {
        cout<<"Feud continues"<<endl;
    }

}
