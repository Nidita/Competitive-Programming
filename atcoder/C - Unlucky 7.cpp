#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0,cnt=0;

for(int i=1;i<=n;i++)
{
   //  cnt++;
    int x=i;
    int ok=0;
    while(x!=0)
    {
         cnt++;

        if(x%10==7)
        {
            ok=1;
           // break;
        }
        x/=10;
    }
    x=i;
    while(x!=0)
    {
        //cnt++;

        if(x%8==7)
        {
            ok=1;
            //break;
        }
        x/=8;
    }
    if(ok==1)
    {
        ans++;
    }

}
//cout<<cnt<<endl;
cout<<n-ans<<endl;

}
