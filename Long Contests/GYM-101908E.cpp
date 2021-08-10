#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    set<int>s;
    cin>>s1>>s2;
    int a=s1.size(),b=s2.size();
    int c=a-b;
   // cout<<c<<endl;
    for(int i=0;i<s2.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(s2[i]==s1[j])
            {
               if(j-i>=0 && j-i<=c)
            {
               // cout<<s2[i]<<endl;
                 //cout<<"i "<<i<<endl;
                 //cout<<"j "<<j<<endl;
               s.insert(j-i);
                }
            }
        }
    }
    cout<<(c+1)-s.size()<<endl;
}
