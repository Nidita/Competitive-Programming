#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    a=n/5;
    b=(n%5)/4;

    c=((n%5)%4)/3;
     d=(((n%5)%4)%3)/2;
       e=(((n%5)%4)%3)%2;
    printf("%d\n",a+b+c+d+e);
}
