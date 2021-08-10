#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k;
    string s1,s2;
    cin>>s1>>s2;
    int c=0,u=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        {
            c++;
        }
    }
    u=s1.size()-c;
    n=s1.size();
    cout<<min(k,c)+min(n-k,u)<<endl;
}
