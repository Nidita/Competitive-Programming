#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b){

    int c;
    if(a!=0)
    {
         int c;
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
}
int main()
{

    int n,g;
    while(scanf("%d",&n) &&n!=0){

      g = 0;
      for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
          g+=gcd(i,j);
        }
      }
      printf("%d\n",g);
    }

}
