#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int i=0,count1=0;
    while(a[i]!='\0'){
        if(a[i]==a[i+1]){
            count1++;
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d\n",count1);


}
