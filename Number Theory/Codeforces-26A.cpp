#include <bits/stdc++.h>
using namespace std;


int main()
{


    vector<long long>v;
    set<long long>s;
     vector<long long>vec;
    vector<long long>::iterator it;
    vector<long long>::iterator itr;
    bool prime[3001];
    memset(prime, true, sizeof(prime));
long long k,n,m,c=0,d=0,j;
    for (long long p=2; p*p<=3000; p++)
    {

        if (prime[p] == true)
        {

            for (long long i=p*p; i<=3000; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=3000; p++)
     {if (prime[p] ){

         v.push_back(p);


     }
     }
     it=v.begin();
    /* for(itr=v.begin();itr!=v.end();itr++)
     {
         cout<<*itr<<" ";*/
         cin>>n;
         j=6;
        while(j<=n)
        {
             m=j;
             while(m!=1 && m>=*it){
             if(m%*it==0)
             {

                 m=m/(*it);
                 //cout<<*it<<endl;
                 it++;
                 c++;

             }
             else
             {
                 it++;
             }
             }
            // cout<<c<<endl;
            if(c==2)
             {
               d++;
             }

             c=0;
            it=v.begin();
            j++;

         }
         cout<<d<<endl;


}











