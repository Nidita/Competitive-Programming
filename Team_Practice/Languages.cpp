#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
  cin>>t;
  getchar();
   map<string,string>m;
   char c[]={';',',','.','!','?','(',')','{','}','[',']'};
 while(t--)
 {   vector<string>v;
     string s;
     getline(cin,s);
     for(int i=0;i<s.size();i++)
     {
         for(int j=0;j<11;j++)
         {
             if(s[i]==c[j])
             {
                 s[i]=' ';
             }
         }
     }
     stringstream ss(s);
     string n;
     while(ss >> n)
     {
         v.push_back(n);
     }

    for(int i=1;i<v.size();i++)
    {
        m[v[i]]=v[0];
    }

 }
 string s;
 while(getline(cin,s))
 {   vector<string>v;
for(int i=0;i<s.size();i++)
     {
         for(int j=0;j<11;j++)
         {
             if(s[i]==c[j])
             {
                 s[i]=' ';
             }
         }
     }
     stringstream ss(s);
     string n;
     while(ss >> n)
     {
         v.push_back(n);
     }

    for(int i=0;i<v.size();i++)
    {
      if(m[v[i]].size()!=0)
      {
         cout<<m[v[i]]<<endl;
         break;
      }
    }

 }



}
