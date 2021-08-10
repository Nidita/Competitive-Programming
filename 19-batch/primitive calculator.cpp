#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int mem[1000006],parent[10000006];
int x;
int bfs(int n,int stage)
{
    queue<pii>q;
    q.push(make_pair(n,stage));

    while(!q.empty())
    {
        pii v=q.front();
        q.pop();
        int n1=v.first,stage1=v.second;
        mem[stage1]=n1;
        //cout<<n1<<' '<<stage1<<endl;
        if(n1==x)
        {
            return stage1;

        }
        q.push(make_pair((v.first*3<=x)*v.first*2,v.second*3+1));
          q.push(make_pair((v.first*2<=x)*v.first*3,v.second*3+2));
            q.push(make_pair((v.first+1<=x)*v.first+1,v.second*3+3));
    }
}
int main()
{
    cin>>x;
    int stage=bfs(1,0);
vector<int>v;

    while(stage!=0)
    {
       v.push_back(mem[stage]);
       if(stage%3==0) stage=(stage/3)-1;
       else stage/=3;

    }

    reverse(v.begin(),v.end());
    cout<<v.size()<<endl;
    cout<<1<<' ';
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }


}
