#include <bits/stdc++.h>
using namespace std;
long long binary(long long a)
{
    long long s=0,g=1;
    while(a!=0){
   // long long s=0,g=1;
    s+=((a%2)*g);
    a=a/2;
    g=g*10;
   // f++;
    }
    return s;
}
int main()
{
    long long t,o,a,b,c,d,e,f,g,h,i,j,l,m;
    char k;
    cin>>t;
    for(o=1;o<=t;o++)
    {
        cin>>a;
        e=binary(a);
        cin>>k;
        cin>>b;
        f=binary(b);
        cin>>k;
        cin>>c;
        g=binary(c);
        cin>>k;
        cin>>d;
        h=binary(d);
       cin>>i;

        cin>>k;
        cin>>j;

        cin>>k;
        cin>>l;

        cin>>k;
        cin>>m;
       // cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
       if(e==i && f==j && g==l && h==m)
       {
           cout<<"Case "<<o<<": Yes"<<endl;
       }
       else
       {
          cout<<"Case "<<o<<": No"<<endl;
       }



    }
}
