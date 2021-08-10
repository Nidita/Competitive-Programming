#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    char c[n];
    cin>>s;
    int k,j;
    if(n%2!=0)
    {
         c[n/2]=s[0];
    k=(n/2)-1;
    j=(n/2)+1;
    for(int i=1;i<n;i+=2)
    {
       c[k--]= s[i];
       c[j++]=s[i+1];

    }


    }
    else
    {

    k=(n/2)-1;
    j=(n/2);
    for(int i=0;i<n;i+=2)
    {
       c[k--]= s[i];
       c[j++]=s[i+1];

    }
   // c[k]=s[0];

    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i];
    }


}
