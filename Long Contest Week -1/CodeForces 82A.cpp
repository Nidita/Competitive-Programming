#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,s,s1,n,m,o,p;
   i=5;
   s=i;
   s1=0;
   cin>>n;
   while(s<n)
   {
       s1+=i;
       i*=2;
       s+=i;
   }
   m=n-s1;


   o=i/5;
   p=m/o;
   if(m%o!=0)
   {
       p=p+1;
   }
   else
   {
       p=p;
   }
   if(p==1)
    cout<<"Sheldon"<<endl;
   else if(p==2)
    cout<<"Leonard"<<endl;
     else if(p==3)
    cout<<"Penny"<<endl;
     else if(p==4)
    cout<<"Rajesh"<<endl;
    else if(p==5)
    cout<<"Howard"<<endl;



}
