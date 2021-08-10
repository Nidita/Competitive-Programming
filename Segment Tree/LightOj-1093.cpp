#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mx 100005
int a[mx];
int max_t[mx*3];
int min_t[mx*3];

void init(int node,int b,int e)
{
    if(b==e)
    {
        max_t[node]=a[b];
        min_t[node]=a[b];
        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);

    max_t[node]=max(max_t[left],max_t[right]);
    min_t[node]=min(min_t[left],min_t[right]);

}

ll mx_query(int node,int b,int e,int i,int j)
{
    if(e<i||b>j)
        return 0;
    if(b>=i&&e<=j)
        return max_t[node];

    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;

    ll p1=mx_query(left,b,mid,i,j);
    ll p2=mx_query(right,mid+1,e,i,j);

    return max(p1,p2);
}

ll mn_query(int node,int b,int e,int i,int j)
{
    if(e<i||b>j)
        return 1000000000;
    if(b>=i&&e<=j)
        return min_t[node];

    int left=node*2;
    int right=left+1;
    int mid=(b+e)/2;

    ll p1=mn_query(left,b,mid,i,j);
    ll p2=mn_query(right,mid+1,e,i,j);

    return min(p1,p2);
}


int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,d;
        scanf("%d%d",&n,&d);
        for(int i=1; i<=n; i++)
            scanf("%d",&a[i]);
        init(1,1,n);
        ll z=0;
        for(int i=1; i+d-1<=n; i++)
        {

            ll differnce=mx_query(1,1,n,i,i+d-1)-mn_query(1,1,n,i,i+d-1);
            z=max(z,differnce);
        }
        printf("Case %d: %lld\n",j++,z);
    }
}
