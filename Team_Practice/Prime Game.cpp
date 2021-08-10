#include <bits/stdc++.h>
#define mx 1005
using namespace std;
typedef long long ll;
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
    int n;
    cin>>n;
    int arr[n],cs[n+1][170];
    memset(cs,0,sizeof(cs));
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

  //  set<int>s;
  map<int,int>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<prime.size();j++)
        {
            if(arr[i]%prime[j]==0)
            {
                s.insert(prime[j]);
                cs[i][j]=1;
                m[j]=1;

            }

        }

    }

      for(int j=0;j<prime.size();j++)
      {

      for(int i=0;i<n;i++)
    {
        cs[n][j]+=cs[i][j];

    }

    }
    //cout<<s.size()<<endl;
    int cumsum[n];
   /* for(int i=0;i<n;i++)
    {
        cumsum
    }
    */
    int u=s.size();
   // cout<<u<<endl;
    for(int i=0;i<n;i++)
    {
        u=s.size();
        //cout<<u<<endl;
        for(int j=0;j<prime.size();j++)
        {
            if(cs[n][j]==0 && m[j]==1)
            {
              u--;
            }
            cs[n][j]-=cs[i][j];
           // cout<<cs[n][j]<<' ';


        }
       // cout<<u<<endl;
        cumsum[i]=u;


    }
    for(int i=0;i<n;i++)
    {
        cout<<cumsum[i]<<' ';
    }



 }
