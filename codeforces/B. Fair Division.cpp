#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int one=0,two=0,p=1;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }
        if(one==0 || two==0)
        {
           if((one+two)%2==0)
           {

           }
           else
           {
               p=0;
           }
        }

      else   if(one>=two)
        {


        }
        else
        {
if((two-one)%2==0)
{

}
else
{
    p=1;
}
        }
        if(p==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
             cout<<"Yes"<<endl;
        }
    }
}
