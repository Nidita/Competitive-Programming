#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,swp=0;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<m;i++)
    {
        cin>>brr[i];
       // swp+=n;
       // n++;
    }

  /*  int last_index=-1,swp=0;
    for(int i=0;i<m;i++)
    {
        last_index=-1;

        for(int j=0;j<n;j++)
        {
            if(brr[i]>arr[j])
            {
                last_index=j;
            }
            else if(brr[i]==arr[j])
            {
                last_index=j-1;
            }


        }
        swp+=last_index+1;
    }
    */
    cout<<swp<<endl;


}
