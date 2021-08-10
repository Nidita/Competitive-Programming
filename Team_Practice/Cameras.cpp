#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r;
    cin>>n>>k>>r;
    int mem[n+1];
    for(int i=0;i<=n;i++)
    {
        mem[i]=0;
    }
    int x;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        mem[x]=1;
    }
    int c=0,ans=0;
    for(int i=1;i<=n;i++)
    {
        mem[i]+=mem[i-1];
        if(i>r)
        {
           c++;
        }
      if((i-c)%r==0)
      {
          if(mem[i]-mem[c]==0)
          {
              mem[i-1]+=1;
              mem[i]+=2;
              ans+=2;
          }
          else if(mem[i]-mem[c]==1)
          {
              mem[i]+=1;
              ans+=1;
          }


      }


    }
    cout<<ans<<endl;

}
