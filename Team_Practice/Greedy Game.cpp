#include <bits/stdc++.h>
using namespace std;
struct o
{
    int ae, index, be;
};

bool cmp(o s1, o s2)
{
   if(s1.ae==s2.ae)
   {
       if(s1.be<s2.be)
       {
           return false;
       }
       else
       {
           return true;
       }
   }
   else if(s1.ae<s2.ae)
   {
       return true;
   }
   else
   {
       return false;
   }
}
int main()
{
    int n;
    cin>>n;
    o a[n],b[n];
    vector<int>c;
    long long sum=0;
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];

    }
    for(int i=0;i<n;i++)
    {
        a[i].ae=arr[i];
        a[i].index=i;
        a[i].be=brr[i];
         b[i].ae=brr[i];
        b[i].index=i;
        b[i].be=arr[i];

    }
    sort(a,a+n,cmp);
    sort(b,b+n,cmp);

  reverse(a,a+n);
  reverse(b,b+n);
 /* for(int i=0;i<n;i++)
  {
      cout<<a[i].ae<<' '<<a[i].be<<endl;
  }
  */
  bool p=0;
  for(int i=0;i<n;i++)
  {
      int y;
      if(p==0)
      {
           y=a[i].index;
      }
      else
      {
          y=b[i].index;
      }

      if(!binary_search(c.begin(),c.end(),y))
      {
          if(p==1)
          {
              sum+=b[i].ae;
          }
          p=!p;
          c.push_back(y);
      }
  }
  cout<<sum<<endl;
}
