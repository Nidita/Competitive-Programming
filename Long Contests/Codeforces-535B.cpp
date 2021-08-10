#include <bits/stdc++.h>
using namespace std;

int main()
{


  vector<long long>v;
  vector<long long>::iterator it;
  v.push_back(4);
   v.push_back(7);

int i=0;
 while(!v.empty())
   {
       long long a=v[i]*10;
    long long b=a+4;
    long long c=a+7;
if(b>1000000000&&  c>1000000000 )
    {
        break;
    }
    else
    {
        v.push_back(b);
          v.push_back(c);

    }
  // cout<< v.size()<<" ";
    i++;
   }

sort(v.begin(),v.end());
   long long n;
   cin>>n;
   cout<<(lower_bound(v.begin(),v.end(),n)-v.begin())+1;



}
