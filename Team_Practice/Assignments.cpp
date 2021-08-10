#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c1=0;
    cin>>t;
    while(t--)
    {

    c1=0;
    double d,v,f,c,tm;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        cin>>v>>f>>c;
        tm=d/v;
        if(tm*c<=f)
        {
            c1++;
            //cout<<"*"<<' ';
        }
    }
    cout<<c1<<endl;
    }
}
