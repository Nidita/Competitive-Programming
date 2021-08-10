#include <bits/stdc++.h>
using namespace std;
int main()
{
    char brr[]={'R','O','Y','G','B','I','V'};
    int n;
    cin>>n;
    char arr[n];


    for(int i=0;i<(n/7)*7;i++ )
    {
        arr[i]=brr[i%7];
    }
    int o=3;
    if(n%7>=4)
    {
          for(int i=(n/7)*7;i<n;i++ )
    {
        arr[i]=brr[i%7];

    }
    }
    else{
      for(int i=(n/7)*7;i<n;i++ )
    {
        arr[i]=brr[o++];

    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}
