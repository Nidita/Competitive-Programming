#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,m,s,j;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>m;
        long long a[m];
        s=0;

        for(i=0;i<m;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+m);

       cout<<s-(a[0]*m)<<endl;
    }
}
