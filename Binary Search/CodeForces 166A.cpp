
#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long n,k,temp,i,j;
   cin>>n>>k;
   int arr[n],ara[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
       cin>>ara[i];
   }
//int a[n];
   for(i=0;i<n;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(arr[j+1]>arr[j])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
                temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
           }
           else if(arr[j+1]==arr[j])
           {
                 if(ara[j+1]<ara[j])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
                temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
           }
           }
       }
   }
 //  cout<<"///"<<endl;
  /*  for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
       cout<<ara[i]<<endl;
   }*/
   long long b=0,c=0;

   for(i=k-1;i<n-1;i++)
   {
       if(arr[i]==arr[i+1]&& ara[i]==ara[i+1])
       {
           b++;
       }
       else
       {
           break;
       }

   }
    for(i=k-1;i>=1;i--)
   {
       if(arr[i]==arr[i-1]&& ara[i]==ara[i-1])
       {
           c++;
       }
       else
       {
           break;
       }

   }
   cout<<b+c+1<<endl;

}
