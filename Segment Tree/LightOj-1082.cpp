#include <bits/stdc++.h>
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
void update1(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue+tree[node];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update1(Left, b, mid, i, newvalue);
    update1(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
}
int main()
{
int t,j=1;
scanf("%d",&t);
while(t--){
   int n,q;
  scanf("%d %d",&n,&q);
  // init(1,1,n);
  for(int i=0;i<=mx;i++)
  {
      arr[i]=0;
  }
  for(int i=0;i<=3*mx;i++)
  {
      tree[i]=0;
  }
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&arr[i]);
   }
    init(1,1,n);
    printf("Case %d:\n",j++);
   for(int i=1;i<=q;i++)
   {
       int o;
       scanf("%d",&o);
       if(o==1)
       {
           int p;
           scanf("%d",&p);
          printf("%d\n",query(1,1,n,p+1,p+1));
           update(1, 1, n, p+1, 0);
       }
       else if(o==2)
       {
           int p,q;
              scanf("%d %d",&p,&q);
            update1(1, 1, n, p+1, q);
       }
       else
       {
            int p,q;
          scanf("%d %d",&p,&q);
             printf("%d\n",query(1,1,n,p+1,q+1));
       }
   }
}
}
