#include <bits/stdc++.h>
#define ll long ong
using namespace std;

int main()
{
    long long a,b,c=0;
    cin>>a>>b;
    while(b!=a)
    {


    if(b<a)
    {
        if(a%2!=0)
        {
            a+=1;
            a/=2;
            c+=2;
        }
        else
        {
            a/=2;
            c++;
        }
    }
    else
    {
        a++;
        c++;
    }
    }
    cout<<c<<endl;
}
