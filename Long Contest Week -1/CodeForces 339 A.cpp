#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    int d,k,i;
    d=strlen(s);
     sort(s,s+d);

       for(i=(d/2);i<d;i++)
       {
           if(s[i+1]!='\0')
           {
               cout<<s[i]<<"+";
           }
           else
           {
               cout<<s[i]<<endl;
           }
       }



}
