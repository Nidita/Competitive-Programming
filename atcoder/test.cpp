#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    int cnt=0;
    while(s!=1)
    {
        cnt++;
cout<<s<<' ';
        s+=k;

        if(s>n)
        {
            s%=n;

        }
    }
    cout<<endl;
    cout<<cnt<<endl;

}
