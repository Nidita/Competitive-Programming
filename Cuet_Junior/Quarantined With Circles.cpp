#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double R,n,k,r,big,small;
        cin>>R>>n;
        k=sin((pi)/n);
        r=(k*R)/(1-k);
    small=((pi*r*r)/4.0)*2.00;
       big=(2*r*r)*(2*r*r)*k;
        cout<<fixed<<setprecision(10)<<big-small<<endl;


    }
}

