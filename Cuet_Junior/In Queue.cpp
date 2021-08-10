#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int m;
bool Comparataor( pair<int,int> a, pair<int,int> b)
{
    if(a.second>=m && b.second>=m)
    {
        if(a.first<b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if(a.second ==b.second)
        {
            if(a.first<b.first)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
      else  if(a.second<b.second)
        {
            return false;
        }
        else
        {
            return true;
        }
    }


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n>>m;
        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++)

        {
            int x;
        cin>>x;
            v.push_back(make_pair(i,x));
        }
        sort(v.begin(),v.end(),Comparataor);
        for(int i=0;i<n;i++)
        {
            cout<<v[i].first<<' ';
        }
        cout<<endl;
    }
}
