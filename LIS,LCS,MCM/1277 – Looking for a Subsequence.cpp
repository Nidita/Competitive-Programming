#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n],q[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         for(int i=0;i<m;i++)
        {
            cin>>q[i];
        }
        cout<<"Case "<<k++<<":"<<endl;
        for(int i=0;i<m;i++)
        {


        vector<int>v;
        for(int j=0;j<n;j++)
        {


      int l=upper_bound(v.begin(),v.end(),arr[j])-v.begin();
      if(l==v.size())
      {
          v.push_back(arr[j]);
      }
      else
      {
          v[l]=arr[j];
      }
      if(v.size()==q[i])
      {
          break;
      }
        }
        if(q[i]>v.size())
        {
            cout<<"Impossible"<<endl;

        }
        else{
        for(int j=0;j<q[i];j++)
        {
            cout<<v[j]<<' ';
        }
        cout<<endl;
        }
        }

    }
}
