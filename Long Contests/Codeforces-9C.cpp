
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,digits=0,m,sum=0,zero=0,l=0;
vector<int>v;
    cin>>n;
    m=n;
    while(m!=0)
    {        int k=m%10;
        m/=10;
        digits++;
      v.push_back(k);

    }
    reverse(v.begin(),v.end());
    int o=v.size();
    for(int i=0;i<v.size();i++)
    {
       if(v[i]>1)
        {
            l=1;
        }
        if(l==0 && v[i]==0)
        {

            zero+=pow(2,(o-1-i));
        }


    }

    digits--;
    for(int i=1;i<=digits;i++)
    {
        int p=pow(2,i);
        sum+=p;
    }


  sum++;

 //cout<<sum<<" "<<zero<<endl;
 cout<<sum-zero<<endl;



}
