#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Set(ll N,ll pos){return N=N | (1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
ll n ,k;
ll  d[33000][20];
ll dp(ll last_used,ll mask)
{
    ll ret=0;
    if(mask==(1<<n)-1)return 1;
    if(d[mask][last_used]==-1)
    {


    for(ll i=1;i<=n;i++)
    {
        if((!check(mask,i-1) && abs(i-last_used)<=k)||mask==0)
        {
            ret+=dp(i,Set(mask,i-1));
        }
    }
    d[mask][last_used]= ret;
    }
    return d[mask][last_used];
}






int main()
{

	int t;
	scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		memset(d, -1, sizeof(d));
		cin>>n>>k;
		cout<<dp(0,0)<<endl;


	}


}
