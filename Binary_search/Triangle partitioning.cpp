#include <bits/stdc++.h>
using namespace std;
double triangleratio(double ab,double ac,double bc,double ad)
{
    double de,ae,s1,s2;
    ae = (ad*ac)/ab;
    de = (ad*bc)/ab;
    s1=(ab+bc+ac)/2.0;
    s2=(ad+de+ae)/2.0;
    double bt=sqrt((s1-ab)*(s1-bc)*(s1-ac)*s1);
     double st=sqrt((s2-ad)*(s2-de)*(s2-ae)*s2);
     double t=bt-st;
     return st/t;



}
double bs(double ab,double ac,double bc,double r)
{
    double low=0.0,high=ab,mid,ad;
    for(int i=0;i<=100;i++)
    {
        mid=(low+high)/2.0;
        ad=mid;
        if(triangleratio(ab,ac,bc,ad)>r)
        {
            high=mid;
        }
        else
        {
            low=mid;
        }


    }
     return ad;
}

int main()
{
    int t,o=1;
    cin>>t;
    while(t--)
    {
        double ab, ac, bc,r,ad;
        cin>>ab>>ac>>bc>>r;
        ad=bs(ab,ac,bc,r);
        cout<<"Case "<<o++<<": "<<fixed<<setprecision(10)<<ad<<endl;
    }
}

