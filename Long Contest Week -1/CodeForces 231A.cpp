#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[3],d,count1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[j]);
        }
       d=count(a,a+3,1);

        if(d>=2){
            count1++;
        }

    }
    printf("%d\n",count1);
}
