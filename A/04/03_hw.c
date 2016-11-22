#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int letters[26];
    for (i=0;i<26;i++)
    {
        letters[i] = 0;
    }
    char in[1001];
    fgets(in,1001,stdin);
    for (i=0;i<strlen(in);i++)
    {
        if (in[i]>64&&in[i]<91) letters[in[i]-65]+=1;
        if (in[i]>96&&in[i]<123) letters[in[i]-97]+=1;
    }
    for (i=0;i<26;i++)
    {
      if (letters[i]!=0)
      {
          printf("%c - ",97+i);
          printf("%d\n",letters[i]);
      }
    }
    return 0;
}
