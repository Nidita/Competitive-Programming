#include <bits/stdc++.h>

#define pi pair<string,string>
using namespace std;
bool cmp2(pi i1, pi i2)
{
    if(i1.first == i2.first)
    {
        return (i1.second<i2.second);
    }
    else
    {
        return (i1.first >i2.first);
    }
}
int main()
{
    int t;
    cin>>t;
     vector<pi>v;
   for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
       v.push_back(make_pair(b,a));

    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++)
    {
        cout<<v[i].second<<' '<<v[i].first<<endl;
    }
}
