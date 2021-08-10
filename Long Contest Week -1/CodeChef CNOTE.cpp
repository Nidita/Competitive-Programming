
#include <bits/stdc++.h>

using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
     int n,x,y,k,flag=0,p,c;
     cin>>x>>y>>k>>n;
     for(int i=0; i<n; i++)
     {
         cin>>p>>c;
         if(p>=x-y && c<=k){flag=1;}
     }
     if(flag==1){cout<<"LuckyChef"<<endl;}
     else{cout<<"UnluckyChef"<<endl;}
    }

    return 0;
}
