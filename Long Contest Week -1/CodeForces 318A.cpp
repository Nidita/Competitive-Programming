#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,m,o;
    cin>>n>>i;
    if(n%2==0)
    {
        m=n/2;
        if(i<=m)
        {
            o=(2*i)-1;
        }
        else
        {   i=i-m;
            o=(2*i);
        }
    }
    else
    {
       m=(n+1)/2;
        if(i<=m)
        {
            o=(2*i)-1;
        }
        else
        {    i=i-m;
            o=(2*i);
    }
    }
    cout<<o<<endl;
}
