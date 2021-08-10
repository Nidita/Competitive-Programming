#include <bits/stdc++.h>
#define ll long long
#define mx 405
#define big 15
using namespace std;
ll color[mx][mx], weight[mx][mx];
string arr[mx];

int n,W,k;
struct p
{
    int a;
    vector<int>vec;
};
p o;
p value[mx][mx];
p solve(int i,int j,ll w,set<int>s,vector<int>v)
{
     if(value[i][j].a!=big)
    {
        return value[i][j];
    }

     p d;
    if(i==n-1 && j==n-1)
    {
        if(w+weight[i][j]<=W)
        {

            s.insert(color[i][j]);
           v.push_back(i+1);
            v.push_back(j+1);
         d.a=s.size();
         d.vec=v;

            return d;

        }
        else
        {    d.a=15;
             d.vec=v;

            return d;
        }

    }
     if(i>=n || j>=n)
    {
            d.a=15;
             d.vec=v;

            return d;
    }



           s.insert(color[i][j]);
           v.push_back(i+1);
            v.push_back(j+1);
         //  arr[i][j]=s1;
    if(solve(i+1,j,w+weight[i][j],s,v).a<solve(i,j+1,w+weight[i][j],s,v).a)
    {
        value[i][j]=solve(i+1,j,w+weight[i][j],s,v);

          }
    else
    {
        value[i][j]=solve(i,j+1,w+weight[i][j],s,v);

    }
   // value[i][j]=min(solve(i+1,j,w+weight[i][j]),solve(i,j+1,w+weight[i][j]));
    return value[i][j];
}

int main()
{
    cin>>n>>k>>W;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
              cin>>weight[i][j];
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
              cin>>color[i][j];
        }

    }
    set<int>s;
vector<int>v;
for(int i=0;i<mx;i++)
{
    for(int j=0;j<mx;j++)
    {
        value[i][j].a=big;
    }
}
 o=solve(0,0,0,s,v);


if(o.a==15)
{
    cout<<"-1"<<endl;
}
else{
    cout<<o.a;
      cout<<endl;
    for(int i=0;i<o.vec.size();i++)
    {
        cout<<o.vec[i]<<' ';
    }
    cout<<endl;
}

}
