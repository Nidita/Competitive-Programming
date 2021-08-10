#include <bits/stdc++.h>


using namespace std;

long int gcd(long int a,long int b)

{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()

{
    int t;
    long int a,b,i,g;
    scanf("%d",&t);
    while(t--)

    {
        scanf("%ld %ld",&a,&b);
        int sum=0;
        g=gcd(a,b);
        for(i=1;i<=sqrt(g);i++)
        {
            if(i*i==g)
            {

                    sum++;
            }
            else if(g%i==0)
            {
               sum+=2;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
