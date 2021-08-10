#include <bits/stdc++.h>
using namespace std;


int main()
{


    vector<long long>v;
     //vector<long long>vec;
    vector<long long>::iterator it;
    vector<long long>::iterator itr;
    bool prime[1000001];
    memset(prime, true, sizeof(prime));
long long k,n,m,c=0;
    for (long long p=2; p*p<=1000000; p++)
    {

        if (prime[p] == true)
        {

            for (long long i=p*p; i<=1000000; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=1000000; p++)
     {if (prime[p] ){

         v.push_back(p);

     }
     }



while((scanf("%lld",&n))&&n!=0){
c=0;


           it=v.begin();
    while(1)
    {
      k=n-*it;
      if(*it>k)
      {
            cout<<c<<endl;
          break;
      }

      if(binary_search(v.begin(),v.end(),k))
      {
         c++;

      }
      else
      {



         // it++;


          }
          it++;

      }


      }
    }





