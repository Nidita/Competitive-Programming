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
       if(s.size()%2!=0)
       {
           cout<<"No"<<endl;
       }
       else
       {
           if(s[0]==')' || s[s.size()-1]=='(')
           {
               cout<<"No"<<endl;
           }
           else
           {
               cout<<"Yes"<<endl;
           }
       }
    }
}
