#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pi;
struct cmp
{
    bool operator()(pi const& a,pi  const& b)
    {
        if(a.first==b.first)return a.second >b.second;
        else return a.first<b.first;
    }
};
int main()
{
    vector<pi>v;
    for(int i=0;i<4;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
   // sort(v.begin(),v.end(),cmp);
    for(int i=0;i<4;i++)
    {
        cout<<v[i].first<<' '<<v[i].second<<endl;
    }
}
