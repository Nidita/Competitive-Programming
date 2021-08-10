#include <bits/stdc++.h>
#define ll long long
using namespace std;
 string s;
int arr[100005];
ll dp[100005];
map<ll,ll>m;
 int c=0;
ll solve(int pos )
{
    if(pos==c)
    {
        return 1;
    }
    ll val=0;
    if(dp[pos]!=-1)return dp[pos];

          val=val+(m[arr[pos]]*solve(pos+1));
          val+=solve(pos+1);

    return dp[pos]=val;
}

int main()
{

    cin>>s;
    for(int i=0;i<100005;i++)
    {
        dp[i]=-1;
    }

    for(int i=0;i<s.size();i++)
    {
        m[(ll)s[i]-'a']++;
        if( m[(ll)s[i]-'a']==1)
        {
            arr[c++]=(ll)s[i]-'a';
        }

    }
    cout<<solve(0)<<endl;

}
