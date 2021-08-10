#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n;
        cin>>w>>h>>n;
        int sum1=1,sum2=1,c1=1,c2=1,p=1;
        while(w%2==0)
        {

           c1*=2;
            w/=2;
        }

         while(h%2==0)
        {

            c2*=2;
            h/=2;
        }


        if(c1*c2>=n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
