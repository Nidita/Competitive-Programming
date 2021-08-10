#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        //ADD, SUBTRACT,MULTIPLY, or DIVIDE
    int arr[100],ok[100];
    for(int i=0;i<100;i++)
    {
        arr[i]=i+1;
        ok[i]=1;
    }

        string s;
        int p;
        cin>>s>>p;
        if(s=="ADD" )
        {
                 for(int i=0;i<100;i++)
           {
              arr[i]+=p;
           }
        }
        else if(s=="MULTIPLY")
        {

                 for(int i=0;i<100;i++)
           {
              arr[i]*=p;
           }
        }
        else if(s=="SUBTRACT")
        {
            int cnt=0;
           for(int i=0;i<100;i++)
           {
               if(arr[i]-p<0)
               {
                   cnt++;
               }
               else
               {
                   arr[i]-=p;
               }
           }
           cout<<cnt<<endl;
        }
        else
        {
              int cnt=0;
           for(int i=0;i<100;i++)
           {
               if(arr[i]%p!=0)
               {
                   cnt++;
               }
               else
               {
                   arr[i]/=p;
               }
           }

            cout<<cnt<<endl;
        }

    }
}
