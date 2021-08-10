#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c,i=1;
    char s[100];
    scanf("%d",&a);
    while(i<=a){
        scanf("%s",s);

       c=count(s,s+3,'+');
       if(c!=0){
        b++;
       }
       else{
        b--;
       }
       i++;



    }
    printf("%d",b);

}
