#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll s,num;
        cin>>s;
        ll x=1,c,l=s;

    while(1)
    {

    x=1;
    num=l;



    while(num!=0)
    {
        c=num%10;


        if(c!=0)
        {


        x=(x*c)/(__gcd(x,c));
        }
        num/=10;
    }
    if(l%x==0)
    {
        cout<<l<<endl;
        break;
    }

    l++;
    }


    }
}
