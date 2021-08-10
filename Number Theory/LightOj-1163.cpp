#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        //cout<<"Case "<<j++<<": ";
        long long a,s=0;
        cin>>a;
         cout<<"Case "<<j++<<": ";
     if((a)%9==0)
     {
         cout<<a+(a-9)/9<<" "<<a+a/9<<endl;
     }
     else
     {
        for(int i=8;i>=1;i--)
        {
            if((a-i)%9==0)
            {
                cout<<a+(a-i)/9<<endl;
            }
        }
     }
    }
}
