#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,g;
    long long fib[70];
    fib[0]=1;fib[1]=1;fib[2]=2;fib[3]=4;
    for(int i=4;i<70;i++)
    {
        fib[i]=fib[i-1]+fib[i-2]+fib[i-3]+fib[i-4];
    }
    cin>>t;
    while(t--)
    {
        cin>>g;
        cout<<fib[g]<<endl;

    }
}
