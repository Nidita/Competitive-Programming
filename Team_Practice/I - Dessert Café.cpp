#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
struct node
{
    int a,b,w;
};
bool comparator(node n1,node n2)
{
    return (n1.w< n2.w);
}
int main()
{
    int n,m;
    cin>>n>>m;
   node arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        arr[i].a=a-1;
        arr[i].b=b-1;
         arr[i].w=w;
    }
    sort(arr,arr+n-1,comparator);
    int brr[m];
    int flag[n];
    for(int i=0;i<n-1;i++)
    {
        flag[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
        flag[brr[i]-1]=1;
    }
    set<int>s;
    for(int i=0;i<n-1;i++)
    {
        if(flag[ arr[i].a]==1  )
        {
            s.insert(arr[i].b);
            flag[arr[i].a]=2;
        }
        if(flag[ arr[i].b]==1)
        {
             s.insert(arr[i].a);
              flag[arr[i].b]=2;
        }

    }
    cout<<s.size()<<endl;
}
