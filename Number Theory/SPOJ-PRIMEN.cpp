#include <bits/stdc++.h>
using namespace std;
int main()
{
     vector<long long>v;
     //vector<long long>vec;
    vector<long long>::iterator it;
    vector<long long>::iterator itr;
    vector<long long> prime(1000,1);
    //memset(prime, true, sizeof(prime));
long long k,m,c,a;
    for (long long p=2; p*p<=1000; p++)
    {

        if (prime[p] == 1)
        {

            for (long long i=p*p; i<=1000; i += p)
                prime[i] = 0;
        }
    }


    for (long long p=2; p<=1000; p++)
     {if (prime[p]==1 ){

         v.push_back(p);

     }
     }

  long long n,i,b;
  cin>>n;
for(i=1;i<=n;i++)
{
    cin>>b;
    cout<<"1"<<endl;
   for(it=v.begin();it!=v.end();it++)
   {
       if(*it>b)
       {
           break;
       }
       else
       {
           cout<<*it<<endl;
       }
   }
   cout<<endl;
}

}
