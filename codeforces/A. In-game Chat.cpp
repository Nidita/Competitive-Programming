#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n>>s;
        int cnt=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=')')
            {
                break;
            }
            cnt++;
        }
        if(s.size()-cnt<cnt)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
