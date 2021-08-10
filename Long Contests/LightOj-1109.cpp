#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c,temp;
    int arr[1001];
    int ara[1001];
    for(i=1;i<=1000;i++)
    { c=0;
        for(j=1;j*j<=i;j++)
    {
        if(i%j==0)
        {
            if(i/j==j)
            {
                c++;
            }
            else
            {
                c+=2;
            }
        }
    }


   ara[i-1]=i;
   arr[i-1]=c;


    }
   for(i=0;i<=1000;i++)
    {
        for(j=0;j<=1000-i-1;j++)
        {
            if(arr[j+1]<arr[j])
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
   for(i=0;i<=1000;i++)
    {
        for(j=0;j<=1000-i-1;j++)
        {

             if(arr[j+1]==arr[j] && ara[j+1]>ara[j])
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
/*for(i=0;i<=1000;i++)
    {
        cout<<ara[i]<<" "<<arr[i]<<endl;
    }*/

int t,k,l;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>l;

        cout<<"Case "<<k<<": "<<ara[l]<<endl;
    }

}
