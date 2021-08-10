#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        int a[n][3];
        for(j=0;j<n;j++)
        {

            cin>>a[j][0]>>a[j][1]>>a[j][2];
        }

         for(j=1;j<n;j++)
         {
             a[j][0]+=min(a[j-1][1],a[j-1][2]);
              a[j][1]+=min(a[j-1][0],a[j-1][2]);
              a[j][2]+=min(a[j-1][0],a[j-1][1]);
         }
         c=min(a[n-1][0],min(a[n-1][1],a[n-1][2]));
        cout<<"Case "<<i<<": "<<c<<endl;
        c=0;

    }
}
