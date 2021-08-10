#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;

    while(k--)
    {
        vector<ll>v,vrev;
        while(n!=0)
        {
            v.push_back(n%10);
            vrev.push_back(n%10);
            n/=10;
        }
        sort(v.begin(),v.end());
         sort(vrev.begin(),vrev.end());
         reverse(vrev.begin(),vrev.end());
         ll p=0,q=0;
         for(int i=0;i<v.size();i++)
         {
             p+=v[i];
             q+=vrev[i];
             p*=10;
             q*=10;
         }
         p/=10;
         q/=10;
        n=q-p;






    }
    cout<<n<<endl;







}
