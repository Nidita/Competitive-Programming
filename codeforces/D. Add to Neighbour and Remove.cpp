#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int k=0,c;
        while(k<n)
        {
            c=0;




         if(ceil((double)sum/(double)(n-k))==floor((double)sum/(double)(n-k)))
         {
             c=0;
            // cout<<k<<' ';
             int s=sum/(n-k);
              for(int i=0;i<n;i++)
             {
                 //cout<<c<<' ';
                     c+=arr[i];
                        if(c>s)
                        {
                            break;
                        }
                        else if(c==s)
                        {
                          //  cout<<1<<' ';
                            c=0;
                        }


                }
                //cout<<c<<endl;
                if(c==0)
                {
                    //cout<<k<<' '
                    break;
                }


             }
               k++;


         }
         cout<<k<<endl;

    }
}

