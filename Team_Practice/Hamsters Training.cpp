#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4,c=0;
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
    {
       for(int k=j;k<=n;k++)
    {
       for(int l=k;l<=n;l++)
    {
        /*for(int m=l;m<=n;m++)
    {
        c++;
        cout<<i<<j<<k<<l<<m<<endl;
    }
    */
    c++;
     cout<<i<<j<<k<<l<<endl;
    }
    }
    }
    }
    cout<<c<<endl;
}
