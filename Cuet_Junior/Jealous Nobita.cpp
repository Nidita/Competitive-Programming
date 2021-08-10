#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll o=1,p=1;
             while(p!=n)
             {
                 cout<<o<<' '<<2*o<<endl;
                 p=2*o;
                 if(p!=n)
                 {
                     cout<<o<<' '<<(2*o)+1<<endl;
                     p=(2*o)+1;
                 }
                 else
                 {
                     break;
                 }
                 o++;
             }
        }
    }
}
