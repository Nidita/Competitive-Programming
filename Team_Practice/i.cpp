#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pii>v;
    vector<int>vec;
    int b=0,e=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(make_pair(x,i+1));
        vec.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if((v[i].second-v[i-1].first)!=1)
        {
            b=i+1;
            break;
        }
    }
      for(int i=n-1;i>0;i--)
    {
        if((v[i].second-v[i-1].first)!=1)
        {
            e=i;
            break;
        }
    }
    reverse(vec.begin()+b,vec.begin()+e);
    int p=1;
    for(int i=1;i<n;i++)
    {
        if(vec[i-1]>vec[i])
        {
            p=0;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<' ';
    }
    if(p==1)
    {
        cout<<b+1<<' '<<e+1<<endl;
    }
    else
    {
        cout<<"imp"<<endl;
    }

}
