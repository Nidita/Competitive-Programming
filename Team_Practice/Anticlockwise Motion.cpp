#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll x,y,z,c=0,x1=16001,y1=16001,x2=16001,y2=16001;
    x=sqrt(a);



    if(x%2==0)
    {
        x-=1;

    }
    ll d=((x+1)/2)-1;
    x1-=d;
    y1-=d;


    z=x+1;
   // y=x+2;
    x=x*x;
   // y=y*y;
   y=a-x;
 //  cout<<y<<endl;
 c=0;
 if(y==0)
{

}
 else
 {if(y>=z)
   {
      c=(y%((y/z)*z));

   }
   else

   {
       c=y;
   }
   x1-=1;
 }
   // cout<<x1<<' '<<y1<<' '<<y/z<<' '<<c<<endl;
   int i;
for( i=1;i<=y/z;i++)
{
    if(i==1)
    {
        y1+=z-1;
    }
    else if(i==2)
    {
        x1+=z;
    }
    else if(i==3)
    {
        y1-=z;
    }
     else if(i==4)
    {
        x1-=z;
    }
}
//cout<<x1<<' '<<y1<<' '<<i<<' '<<c<<endl;
 if(i==1)
    {
        if(c>0)
        {


        y1+=c-1;
        }
    }
    else if(i==2)
    {
        x1+=c;
    }
    else if(i==3)
    {
        y1-=c;
    }
     else if(i==4)
    {
        x1-=c;
    }
   // cout<<x1<<' '<<y1<<endl;
    x=sqrt(b);



    if(x%2==0)
    {
        x-=1;

    }
     d=((x+1)/2)-1;
    x2-=d;
    y2-=d;


    z=x+1;
   // y=x+2;
    x=x*x;

   // y=y*y;
   y=b-x;
if(y==0)
{

}
 else
 {if(y>=z)
   {
      c=(y%((y/z)*z));

   }
   else
   {
       c=y;
   }
   x2-=1;
 }
     //cout<<x2<<' '<<y2<<' '<<y/z<<' '<<c<<endl;

for( i=1;i<=y/z;i++)
{
    if(i==1)
    {
        y2+=z-1;
    }
    else if(i==2)
    {
        x2+=z;
    }
    else if(i==3)
    {
        y2-=z;
    }
     else if(i==4)
    {
        x2-=z;
    }
}
//cout<<x2<<' '<<y2<<' '<<i<<' '<<c<<endl;
 if(i==1)
    {
       if(c>0)
        {


        y1+=c-1;
        }
    }
    else if(i==2)
    {
        x2+=c;
    }
    else if(i==3)
    {
        y2-=c;
    }
     else if(i==4)
    {
        x2-=c;
    }
    cout<<abs(x2-x1)+abs(y2-y1)<<endl;


}
