#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cin>>a>>b>>c;
   // cout<<a<<" "<<b<<" "<<c<<endl;
   int arr[a][a];
   arr[0][0]=b;
   for(i=0;i<a;i++){
    for(j=0;j<a;j++){
            if(i==0 && j==0)
            {
                 arr[i][j]=(arr[i][j]);
            }

           else if(i==j)
            {
                arr[i][j]=(arr[i-1][j-1])+c;
            }
            else if(i<j)
            {
                 arr[i][j]=arr[i][j-1]-1;
            }
             else if(i>j)
            {
                 arr[i][j]=arr[i-1][j]-1;
            }
    }
   }
   for(i=0;i<a;i++){
    for(j=0;j<a;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

}
