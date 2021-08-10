
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="Yes";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            if(!(s[i]>='a' && s[i]<='z'))
            {
                s1="No";
            }
        }
        else
        {
            if(!(s[i]>='A' && s[i]<='Z'))
            {
                s1="No";
            }
        }
    }
    cout<<s1<<endl;
}
