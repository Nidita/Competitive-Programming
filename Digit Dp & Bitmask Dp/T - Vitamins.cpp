#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n;
ll cost[1005];
string s[1005];
ll solve (ll mask,ll c)
{
    if(mask==(1<<3)-1)return c;
    ll val=10000000007;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s[i].size();j++)
        {
            mask=mask|(1<<((int)s[i][j]-65));

        }
        val=min(val,solve(mask,c+cost[i]));

    }
    return val;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s1;
        int cos;
        cin>>cos>>s1;
        cost[i]=cos;
        s[i]=s1;
    }
    cout<<solve(0,0)<<endl;

}
