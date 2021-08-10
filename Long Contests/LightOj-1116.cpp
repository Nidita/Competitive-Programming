#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,i,j,c,d=1;
    cin>>t;
    for(i=1;i<=t;i++)
    {  cin>>a;
    if(a%2!=0)
    {
        cout<<"Case "<<i<<": Impossible"<<endl;
    }
    else{
            d=1;
    j=2;
    while(j<a)
    {
        if(a%j==0)
        { c=a/j;
            if(c%2!=0)
            {
                cout<<"Case "<<i<<": "<<c<<" "<<j<<endl;
                d=0;
                break;

            }
            else
            {
                j+=2;
                d=1;
            }
        }
        else
        {
            j+=2;
            d=1;
        }
    }


            if(d==1)
       {
            cout<<"Case "<<i<<": Impossible"<<endl;
       }



    }
    }

}
