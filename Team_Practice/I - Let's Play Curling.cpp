#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
   scanf("%d",&t);
    while(t--)
    {
        int n,m;
      scanf("%d %d",&n,&m);
       vector<int>arr,b,a;
        map<int,int>mo;
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);

            arr.push_back(x);
           // m[arr[i]]++;
        }
         for(int i=0;i<m;i++)
        {
            int x;
         scanf("%d",&x);

            b.push_back(x);
          mo[b[i]]++;
        }
        for(int i=0;i<n;i++)
        {
           if(mo[arr[i]]==0)
           {

            a.push_back(arr[i]);
           }
           // m[arr[i]]++;
        }
        int ans=0;
        sort(a.begin(),a.end());
         sort(arr.begin(),arr.end());
          sort(b.begin(),b.end());

        for(int i=0;i<a.size();i++)
        {
            int c=a[i];
          int l=lower_bound(b.begin(),b.end(),a[i])-b.begin();

            int u=upper_bound(b.begin(),b.end(),a[i])-b.begin();
           l-=1;
            int min_sc=min(abs(b[l]-c),abs(b[u]-c));
            int up=c+min_sc,low=c-min_sc;
            l=upper_bound(arr.begin(),arr.end(),low)-arr.begin();
           l-=1;
            u=upper_bound(arr.begin(),arr.end(),up)-arr.begin();

            u-=1;
            ans=max(ans,u-l);
           // cout<<c<<' '<<min_sc<<endl;




        }
        if(ans==0)
        {
            printf("Impossible\n");
        }
        else{
         printf("%d\n",ans);
        }
    }
}
