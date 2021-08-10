#include <bits/stdc++.h>
using namespace std;
int c[]={1,6,28,88,198,328,428};
int k[]={10,60,280,880,1980,3280,4280};
int p[]={8,18,28,58,128,198,388};

int n;
int ret=0;
int solve(int cost,int mask,int coupon)
{
    if(cost<=n)
    {
        return coupon;
    }
    int val=0;
    for(int i=0;i<7;i++)
    {
        if( (mask&(1<<i))==0)
        {
            val+=solve(c[i]+cost,mask|(1<<i),coupon+k[i]+(!(mask)*p[i]));

        }


    }

    return ret=max(ret,val);

}

int main()
{
    cin>>n;
    cout<<solve(0,0,0)<<endl;
}
