#include<bits/stdc++.h>
#define mx 1000006
using namespace std;
typedef unsigned long long ll;
 vector<ll>prime;

 void sieve()
 {
     bool flag[mx];
     memset(flag,0,sizeof(flag));
     flag[1]=1;
     for(int i=4;i<mx;i+=2)
    {
        flag[i]=1;
    }
     for(int i=3;i<=sqrt(mx);i+=2)
     {
         if(flag[i]==0)
         {
             for(int j=2*i;j<mx;j+=i)
                flag[j]=1;
         }
     }
     for(int i=2;i<mx;i++)
     {
         if(flag[i]==0)
         {
             prime.push_back(i);
         }
     }
     //for(int i=0;i<10;++i)
        //cout<<prime[i]<<endl;
 }



int main()
{
    sieve();
    int t,f=1;
    cin>>t;
    while(t--)
    {


    ll a,b,m,c,s=1;
    cin>>a>>b>>m;
    vector<ll>factor;
    c=abs(a-b);
    for(ll i=0;prime[i]*prime[i]<=c && i<prime.size();i++)
    {
        if(c%prime[i]==0)
        {
            s*=prime[i];
            factor.push_back(prime[i]);
            while(c%prime[i]==0)
            {
                c/=prime[i];

            }
        }
    }
    if(c!=1)
    {
         s*=c;
        factor.push_back(c);
    }
    vector<ll>arr,brr;
    if(s<m)
    {
      for(int i=0;i<s ;i++)
    {
        arr.push_back(a+i);

    }
    }
    else{
    for(int i=0;i<=m ;i++)
    {
        arr.push_back(a+i);

    }
    }

     for(int j=0;j<factor.size();j++)
        {
    for(int i=0;i<arr.size();i++)
    {

            if(arr[i]!=-1 && arr[i]%factor[j]==0)
            {
               // cout<<arr[i]<<' '<<factor[j]<<endl;
               arr[i]=-1;
            }
        }
    }


    ll cnt=0;
  //  cout<<arr.size()<<endl;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=-1)
        {
            cnt++;
        }
       // cout<<arr[i]<<' ';
    }
   // cout<<endl;
  ll sum=0;
   if(s>=m)
    {
        sum=cnt;
    }
    else{
  sum+=((m/s)*cnt);
   for(int i=((m/s)*s)-1 ;i<=m;i++)
    {
        brr.push_back(a+i);

    }
    for(int j=0;j<factor.size();j++)
        {
    for(int i=0 ;i<brr.size();i++)
     {
     if(brr[i]%prime[j]==0 && brr[i]!=-1)
     {
         brr[i]=-1;
     }

    }
        }
        for(int i=0;i<brr.size();i++)
        {
            if(brr[i]==-1)
            {
                sum++;
            }
        }
    }
    cout<<"Case "<<f++<<": ";
       cout<<sum<<endl;
    }

}
