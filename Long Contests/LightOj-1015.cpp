#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,i,j,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {  s=0;
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cin>>b;
            if(b<0)
            {
                s+=0;
            }
            else
            {
                s+=b;
            }
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}
