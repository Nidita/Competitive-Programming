#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int m,n,p,j,i,a,b;
    scanf("%d",&m);
    for(j=1;j<=m;j++)
    {
       scanf("%d %d",&n,&p);
           int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);

        }
        printf("Case %d:\n",j);
       while(p--)
        { scanf("%d %d",&a,&b);

        int   r=lower_bound(arr,arr+n,a)-arr;
        int   s=upper_bound(arr,arr+n,b)-arr;
          printf("%d\n",s-r);

        }
    }
}
