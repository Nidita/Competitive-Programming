#include <bits/stdc++.h>
using namespace std;
double istrue(double mid,double x,double y)
{
    double h1=sqrt((x*x)-(mid*mid));
    double h2=sqrt((y*y)-(mid*mid));

    return (h1*h2)/(h1+h2);

}
int main()
{
    int t,o=1;
    cin>>t;
    while(t--)
    {
        double x,y,c,low=0,high,mid;
        cin>>x>>y>>c;
        high=min(x,y);
        int cnt=100;
        while(cnt>=0)
        {
            cnt--;
            mid=(low+high)/2.00;

            if(istrue(mid,x,y)<=c)
            {
                high=mid;
            }
            else

            {
                low=mid;
            }
        }
       cout<<"Case "<<o++<<": "<<fixed<<setprecision(10)<<low<<endl;

    }
}

