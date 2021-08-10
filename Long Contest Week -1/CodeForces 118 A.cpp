#include <bits/stdc++.h>
using namespace std;
int main()
{
 char s[200],s1[200];
    cin>>s;
    int i=0;

    while(s[i]!='\0')
    {
       if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='Y')
       {
           printf(".%c",tolower(s[i]));
       }
       i++;
    }
}
