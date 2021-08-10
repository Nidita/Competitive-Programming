#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
   for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        map<ll,ll>m;
        ll sum=0,c=1;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
           /* if(m[x]==0)
            {
                m[x]=c++;

            }
            sum+=m[x];
            */
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {

            if(m[arr[i]]==0)
            {
                m[arr[i]]=c++;

            }
            sum+=m[arr[i]];

        }
        cout<<"Case #"<<j++<<": "<<sum<<endl;
    }
}
