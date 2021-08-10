
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double arr[4],sum=0,r,x;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        sum+=arr[i];


    }
    cin>>r;

    sort(arr,arr+4);
   /* sum-=arr[0];
    sum-=arr[3];
    x=(r*3.00)-sum;
    */


    if(((r*3.00)-arr[1]-arr[2])>=arr[3])
    {

        cout<<"infinite"<<endl;
    }
    else if(((r*3.00)-arr[1]-arr[2])<arr[0])
    {
       cout<<"impossible"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<((r*3.00)-arr[1]-arr[2])<<endl;
    }

}
