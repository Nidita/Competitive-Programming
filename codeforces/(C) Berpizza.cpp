#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;
struct cmp
{
    bool operator()(pi const& a,pi  const& b)
    {
        if(a.first==b.first)return a.second > b.second;
        else return a.first<b.first;
    }
};
int main()
{
    int q;
    cin>>q;
     queue<int > byid;
      priority_queue<pi, vector<pi> ,cmp> byval;
      map<int,int>id;
       int cnt=1;
    while(q--)
    {
        int n;

        cin>>n;
        if(n==1)
        {
            int m;
            cin>>m;
             byid.push(cnt);
               byval.push(make_pair(m, cnt));
               cnt++;

        }
        else if(n==2)
        {
           int u;
            u=byid.front();
            while(id[u]!=0)
            {
                byid.pop();
                  u=byid.front();
            }
           id[u]=1;
           cout<<u<<' ';

        }
        else
        {
             pi u;
            u=byval.top();
            while(id[u.second]!=0)
            {
                byval.pop();
                  u=byval.top();
            }
           id[u.second]=1;
             cout<<u.second<<' ';
        }


    }
    /*  while(!byid.empty())
        {
          pi u;
          u=byid.top();
          cout<<u.first<<' ';
          byid.pop();

        }
        */
}

