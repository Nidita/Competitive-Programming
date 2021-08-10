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
        int one=count(s.begin(),s.end(),'1');
        int zero=count(s.begin(),s.end(),'0');
        if(s.size()%2!=0 ||zero==0 ||one==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<abs(one-zero)/2<<endl;
        }
    }}
