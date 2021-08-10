#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    long long n;
    cin>>n;
    if(n==0) break;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else{
    long long result = n;
    for (long long i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            while(n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if(n > 1)
        result -= result / n;
        cout<<result<<endl;
    }
    }
}
