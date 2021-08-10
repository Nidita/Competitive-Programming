#include <bits/stdc++.h>
using namespace std;
int BigMod(long long B,long long P,long long M)
{
long long R=1;
while(P>0)
{
if(P%2==1)
{
R=(R*B)%M;
}
P/=2;
B=(B*B)%M;
}
return R;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long x;
        cin>>x;
        vector<long long>v;
        vector<long long>vec;
         vector<long long>voc;
          vector<long long>vac;
        long long u=1;
        for(long long j=1;j<=x;j++)
        {
           long long a,b;
           cin>>a>>b;
           v.push_back(a);
            vec.push_back(b);
            u*=a;

        }
        long long s=0;
        for(long long j=0;j<x;j++)
        {

           voc.push_back(u/v[j]);


        }
        for(long long j=0;j<x;j++)
        {
            long long p=voc[j]%v[j];

            //cout<<k<<endl;
            vac.push_back(BigMod(p,v[j]-2,v[j]));
        }

        for(long long j=0;j<x;j++)
        {
            s+=(vec[j]*voc[j]*vac[j]);

        }
        cout<<"Case "<<i<<": "<<s%u<<endl;

    }
}
