#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        long long arr[n],sum=0,x,sum1=0,mx=0,sum2=0;
        for(int i=0;i<n;i++)
        {

            cin>>arr[i];

            sum+=arr[i];



        }


            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    sum1+=abs(1-arr[i]);
                }
                else
                {

                     sum2+=abs(1-arr[i]);
                }
            }





       if(2*sum1<=sum)
       {
           for(int i=0;i<n;i++)
           {
              if(i%2==0)
              {
                  cout<<1<<' ';
              }
              else
              {
                  cout<<arr[i]<<' ';
              }
           }
       }
       else
       {
           for(int i=0;i<n;i++)
           {
              if(i%2!=0)
              {
                  cout<<1<<' ';
              }
              else
              {
                  cout<<arr[i]<<' ';
              }
           }
       }
       cout<<endl;







    }
}
