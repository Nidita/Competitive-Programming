#include <stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
  scanf("%s %s",s1,s2);

    if(strcmpi(s1,s2)==0)
    {
  printf("0\n");


    }
    else if(strcmpi(s1,s2)>0)
    {
      printf("1\n");


    }
      else if(strcmpi(s1,s2)<0)

    {
      printf("-1\n");

    }
}
