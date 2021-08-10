#include <bits/stdc++.h>
#define ll long long
#define pi pair<long long,long long>
using namespace std;
bool cmp2(ll i1, ll i2)
{

        return (i1>i2);

}
int main()
{
    int n;
    cin>>n;
    vector<ll>v;
    ll sum=0,sum1=0,ans=0;
    for(int i=0;i<n;i++)
    {
       ll a,b;
       cin>>a>>b;
       sum+=a;
       v.push_back(2*a+b);
    }
    sort(v.begin(),v.end(),cmp2);
    for(int i=0;i<n;i++)
    {
        sum1+=v[i];

        if(sum1>sum)
        {
            ans=i;
            break;
        }
    }
    cout<<ans+1<<endl;

}
