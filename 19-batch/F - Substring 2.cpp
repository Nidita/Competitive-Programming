#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int cnt=0,mn=1000005;
    for(int i=0;i<=s.size()-t.size();i++)
    {
        cnt=0;
      //  cout<<i<<endl;
        for(int j=0;j<t.size();j++)
        {
            if(s[i+j]!=t[j])
            {
                cnt++;
            }
        }

        mn=min(cnt,mn);
    }
    cout<<mn<<endl;
}
