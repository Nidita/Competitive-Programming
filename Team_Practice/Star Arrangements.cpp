#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2,s=n/2;
    if(n%2!=0)
    {
        s+=1;
    }
    while(i<=s)
    {
        int j=i-1;
        if((n%(i+j))==i)
        {
            cout<<i<<' '<<j<<endl;
        }
         if((n%(i+j))==0)
        {
            cout<<i<<' '<<j<<endl;
        }
         if(n%i==0)
        {
            cout<<i<<' '<<i<<endl;
        }
        i+=1;

    }
}
