#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int i=0,j=0;
    while(s[i]!='\0')
    {
       if(s[i]=='h')
       {
           j++;
           break;
       }
       i++;


    }
    i++;
     while(s[i]!='\0')
    {
       if(s[i]=='e')
       {
           j++;
           break;
       }
       i++;
    }
    i++;
     while(s[i]!='\0')
    {
       if(s[i]=='l')
       {
           j++;
           break;
       }
       i++;
    }
    i++;
     while(s[i]!='\0')
    {
       if(s[i]=='l')
       {
           j++;
           break;
       }
       i++;
    }
    i++;
    while(s[i]!='\0')
    {
       if(s[i]=='o')
       {
           j++;
           break;
       }
       i++;
    }
    if(j==5)
    {
        cout<<"YES"<<endl;

}
else
{
    cout<<"NO"<<endl;
}
}
