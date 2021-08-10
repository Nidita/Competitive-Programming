#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,c,j,a,s=1,s1=0;
    //string s,s1,c1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        s=1;
        s1=0;
        cin>>a;
        j=a;
          while(j!=0)
        {
           s*=10;

            j=j/10;

        }
    s/=10;

    j=a;
       while(j!=0)
        {
            c=j%10;


            j=j/10;
            s1+=(c*s);

            s=s/10;

        }


        if(s1==a)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": No"<<endl;
        }


    }
}
