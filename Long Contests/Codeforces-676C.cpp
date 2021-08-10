#include<bits/stdc++.h>
using namespace std;

long long  n,k;
string s;
long long  without(char x)
{
    long long  j=0,cnt=0,ans=0;
    for(long long  i=0;i<n;i++)
    {
        if(s[i]==x)
        {
            cnt++;
        }
        if(cnt>k)
        {
            while(cnt>k)
            {
                if(s[j]==x)
                {
                    cnt--;
                }
                j++;
            }
        }
        ans=max(ans,i-j+1);
        //cout<<x<<' '<<i<<' '<<j<<' '<<ans<<endl;
    }
    return ans;
}
int main()
{
    cin>>n>>k;
    cin>>s;
    long long  ans=max(without('a'),without('b'));
    cout<<ans<<endl;
}
