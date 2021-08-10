#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c,d,e,f,n,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;
        int hf[n+1];
        hf[0]=a%10000007;
         hf[1]=b%10000007;
          hf[2]=c%10000007;
           hf[3]=d%10000007;
            hf[4]=e%10000007;
             hf[5]=f%10000007;
             for(j=6;j<=n;j++)
             {
                 hf[j]=(hf[j-1]+hf[j-2]+hf[j-3]+hf[j-4]+hf[j-5]+hf[j-6])%10000007;
             }
             cout<<"Case "<<i<<": "<<hf[n]<<endl;

    }
}
