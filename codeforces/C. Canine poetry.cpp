
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
        int n=s.size();
        int used[n];
        for(int i=0;i<n;i++)
        {
            used[i]=0;
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {

            if(s[i]==s[i-1] && used[i-1]==0)
            {
                used[i]=1;
            }
            if(s[i]==s[i-2] && used[i-2]==0 && i>=2)
            {
                used[i]=1;
            }

        }
         for(int i=0;i<n;i++)
        {
        ans+=used[i];
        }
        cout<<ans<<endl;
      // cout<<endl;
    }
}
