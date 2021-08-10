#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,i,s,s1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        a=a-1;
        if(a%3==0)
        {
            s=(a/3)*2;
        }
        else if(a%3==2)
        {
            s=(((a+1)/3)*2)-1;
        }
        else if(a%3==1)
        {
            s=((a-1)/3)*2;
        }
        if(b%3==0)
        {
            s1=(b/3)*2;
        }
        else if(b%3==2)
        {
            s1=(((b+1)/3)*2)-1;
        }
        else if(b%3==1)
        {
            s1=((b-1)/3)*2;
        }
        cout<<"Case "<<i<<": "<<s1-s<<endl;

    }
}
