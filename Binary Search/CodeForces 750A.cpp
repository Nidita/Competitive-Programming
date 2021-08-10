#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;

    int s,s1;
    if(k>=236 && k<=240)
    {
        cout<<"0"<<endl;}
    else{
  for(i=1;i<=n;i++)
    {  s=k,s1=k;
       s+=((i*(i+1)*5)/2);
       j=i+1;
       s1+=((j*(j+1)*5)/2);
       if(s1>240)
       {
           break;
       }


    }
    cout<<j-1<<endl;
    }
}
