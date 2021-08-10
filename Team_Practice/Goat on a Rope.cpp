#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x,y,ans;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    if(x1>x2)
    {
        swap(x1,x2);

    }
    if(y1>y2)
    {
        swap(y1,y2);

    }
    if(x>=x1 && x<=x2)
    {
        if(y<=y1)
        {
            ans=y1-y;
        }
        else
        {
            ans=y-y2;
        }
    }
    else if(y>=y1 && y<=y2)
    {
        if(x<=x1)
        {
            ans=x1-x;
        }
        else
        {
            ans=x-x2;
        }
    }
    else
    {
        double d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        ans=d;
        d=sqrt((x-x1)*(x-x1)+(y-y2)*(y-y2));
        ans=min(ans,d);
        d=sqrt((x-x2)*(x-x2)+(y-y1)*(y-y1));
        ans=min(ans,d);
        d=sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
        ans=min(ans,d);

    }
    cout<<fixed<<setprecision(3)<<ans<<endl;
}
