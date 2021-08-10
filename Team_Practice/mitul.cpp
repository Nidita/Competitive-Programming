#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x1,y1,x2,y2,x,y;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    double ans;
    if(y>=y1 && y<=y2)
    {
        if(x<=x1)
           ans=x1-x;
        else
           ans=x-x2;
    }
    else
    {
        if(y<=y1)
           ans=y1-y;
        else ans=y-y2;
    }
    cout<<fixed<<setprecision(3)<<ans<<endl;

}
