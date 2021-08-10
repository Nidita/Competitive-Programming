#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,j=1;
    cin>>t;
  for(int k=0;k<t;k++)
    {
        string s;
        s+='A';
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }

         for(int i=0;i<n;i++)
        {
            char c='B',c1;

             if(i==n-1)
             {
                 for(int l=1;l<=arr[i];l++)
                 {


                 if(i%2==0)
                 {
                     s+=c;
                     c++;
                 }
                 else
                 {
                     s+=c1;
                     c1--;
                 }
                 }
             }
             else
             {
               for(int l=1;l<=arr[i];l++)
               {
                   if(i%2==0)
                   {
                       if(l==arr[i])
                       {
                           if(arr[i+1]>arr[i])
                           {
                               c+=arr[i+1]-arr[i];
                               c1=c-1;
                           }
                           else
                           {
                              c1='A'+arr[i+1]-1;
                           }
                           s+=c;
                       }
                       else
                        {
                        s+=c;
                       c++;
                       }
                   }
                   else
                   {
                       s+=c1;
                       c1--;
                   }
               }
             }

        }



        cout<<"Case #"<<k+1<<": "<<s<<endl;
    }
}

