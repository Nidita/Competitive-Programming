#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        ll sum=1;
        map<ll,ll>m;
        set<ll>s;
        set<ll>::iterator it;
        for(int i=0;i<k;i++)
        {
            ll x;
            cin>>x;
          for(int j=2;j*j<=x;j++)
          {
              ll cnt=0;
              if(x%j==0)
              {
                  s.insert(j);
                  while(x%j==0)
                  {
                      cnt++;
                      x/=j;

                  }
                  m[j]=max(m[j],cnt);
              }
          }
          //cout<<'*'<<x<<endl;
          if(x!=1)
          {
              s.insert(x);
              m[x]=1;
          }
        }
        if(s.size()==1)
        {
            it=s.begin();
            while(m[*it]!=0)
            {
                sum*=*it;
                m[*it]--;
            }
            sum*=*it;
        }
        else
        {


        for(it=s.begin();it!=s.end();it++)
        {
            while(m[*it]!=0)
            {
                sum*=*it;
                m[*it]--;
            }
        }
        }
        cout<<"Case "<<j++<<": "<<sum<<endl;
    }
}
