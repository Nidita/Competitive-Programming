#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int i,j,a[5][5],b,c,e;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
                b=i;
                c=j;
            }
        }
    }

    e=abs(b-2)+abs(c-2);
    printf("%d\n",e);

}
