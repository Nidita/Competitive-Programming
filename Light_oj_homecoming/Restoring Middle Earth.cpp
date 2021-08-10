#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j=1;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        long long sum=0,s=0,s1=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        s1=sum;
        sort(arr,arr+n);
        int p=1;
         int y=0;
        for(int i=n-1;i>=0;i--)
        {
            p++;
            s+=arr[i];
             y++;
 //cout<<p<<' '<<s<<' '<<n-y<<endl;
            if(p==k )
            {sum+=(s1-s);

                p=1;
                  if(n-y<=k)
                {
                    break;
                }


            }


        }
           cout<<"Case "<<j++<<": ";
           if(n<=k)
           {
               cout<<s1<<endl;
           }
           else
           {


        cout<<sum<<endl;
           }

    }
}
