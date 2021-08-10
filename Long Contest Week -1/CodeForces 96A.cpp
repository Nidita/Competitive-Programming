#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    scanf("%s",s);
    int i=0,count1=0,read=0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i+1])
        {
            count1++;
            i++;
        }
        else{
                if(count1>=6){;
                    read=1;
                }
            count1=0;
            i++;


        }
    }
    if(read==1)
    {
        printf("YES\n");
    }
    else if(read==0){
        printf("NO\n");
    }
}
