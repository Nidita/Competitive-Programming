#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>


using namespace std;

long long coprime (long long n)
{
	/*long long  result, j;

	if (n== 1) return 0;
    result = n;

    if (n%2 == 0)
    {
		result -= result/2;
		 while(n%2 == 0)
         {
             n/=2;
         }
    }

	for (j = 3; j*j <= n; j += 2)
	{
		if (n%j == 0)
		{
			result -= result/j;
			while (n%j == 0)
            {
                n/=j;
            }
		}
	}


	if (result > 1) result-=result/n;


	return result;*/
	 if(n==1)
    {
     return 0;
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
        return result;
    }
}



long long divs(long long n) {
	long long ans=n,i,div=1,c=1;

	for (i=2; i<= n/i; i++){
            c=1;
		if ((n % i) == 0)
        {
            while(n%i==0){
            n=n/i;
    c++;

    }

        div=div*c;
        }
	}
	if(n!=1)
    {
        div=div*2;

    }



	return div;
}

int main()
{
    long long n;
    while(cin>>n){
if(n==1)
{
    cout<<"0"<<endl;
}
else{
        cout<<n-(coprime(n)+divs(n)-1)<<endl;
          }
    }


}
