#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
     int j=1;
    while(t--)
    {
       map<int,int>m;
        int n;
        cin>>n;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;


           if(m[x]>0)
           {
          m[x]=1;
           }
           else if(m[-x]>0)
           {
               sum-=(-x);
               m[-x]=0;m[x]=1;

               sum+=x;
           }
           else
           {
               m[x]=1;
               sum+=x;
           }

        }
         cout<<"Case "<<j++<<": ";
        cout<<sum<<endl;

    }
}
