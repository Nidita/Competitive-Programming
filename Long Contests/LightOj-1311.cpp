#include <bits/stdc++.h>
using namespace std;
int main()
{

int n,i;
cin>>n;
for(i=1;i<=n;i++)
{double v1,v2,v3,a1,a2,d1,d2,t1,t2,t;
    cin>>v1>>v2>>v3>>a1>>a2;
    d1=(v1*v1)/(2*a1);
      d2=(v2*v2)/(2*a2);
   t1=(v1/a1);
   t2=(v2/a2);
  t= max(t1,t2);
      cout<<fixed<<"Case "<<i<<": "<<setprecision(9)<<d1+d2<<" "<<setprecision(9)<<t*v3<<endl;

}




}
