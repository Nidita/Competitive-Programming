#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
getchar();
    for(int te=1;te<=t;te++)
    {
       // getchar();
        string s,s1;
     getline(cin,s);
   //  getchar();
     getline(cin,s1);
     stringstream ss(s);
     ll n,n1;
     vector<ll>v,v1;
     while(ss >> n)
     {
         v.push_back(n);
         // cout<<n<<endl;
     }
     stringstream ss1(s1);
     //cout<<"in"<<endl;
     while(ss1 >> n1)
     {
         v1.push_back(n1);
         //cout<<n1<<endl;

     }
     int x[]={1,2,3,3,4,10};
     int y[]={1,2,2,2,3,5,10};
     ll sum=0,sum1=0;
     for(int i=0;i<v.size();i++)
     {
       //  cout<<v[i]<<" ";
         sum+=v[i]*x[i];
     }
   //  cout<<endl;
     for(int i=0;i<v1.size();i++)
     {
        // cout<<v1[i]<<" ";
         sum1+=v1[i]*y[i];
     }
   //  cout<<endl;
      cout<<"Battle "<<te<<": ";
        if(sum>sum1)
        {
            cout<<"Good triumphs over Evil"<<endl;
        }
        else if(sum<sum1)
        {
            cout<<"Evil eradicates all trace of Good"<<endl;
        }
        else
        {
            cout<<"No victor on this battle field"<<endl;
        }
    }
}
