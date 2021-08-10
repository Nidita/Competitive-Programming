#include <bits/stdc++.h>
#define ll long long
#define mod 11092019
using namespace std;
int main()
{
    map<char,int>m;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
    m[s[i]]++;
}
ll c=1;
for(char i='a';i<='z';i++)
{
    c=(c*(m[i]+1)%mod)%mod;
}
cout<<c<<endl;
}
