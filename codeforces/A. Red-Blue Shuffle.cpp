#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string s1,s2;
       cin>>s1>>s2;
       map<char,int>a,b;
       int A=0;
       for(int i=0;i<n;i++)
       {
          if(s1[i]>s2[i])
          {
              A++;
          }
          else if(s1[i]<s2[i])
          {
              A--;
          }
       }
       if(A>0)
       {
           cout<<"RED"<<endl;
       }
       else if (A<0)
       {
            cout<<"BLUE"<<endl;
       }
       else
       {
           cout<<"EQUAL"<<endl;
       }

    }
}
