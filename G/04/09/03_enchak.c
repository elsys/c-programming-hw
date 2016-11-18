#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int i=0;
int cnt[256];   //masiv s broqchi
char shot[1000];
char p=0;
//printf("enter sentence:");
//scanf("%s",shot);
//s=gets(shot);
while(p != '\n')    // terminates if user hit enter
    {
        p = getchar();
        shot[i] = p;
        i++;
    }
    shot[i] = '\0';       
for(i=0;i<256;i++)
{
cnt[i]=0;
//printf("%d -- %c\n",i,i);
}



for(i=0;i<strlen(shot);i++)
{
//printf("%c\n",shot[i]);
if((shot[i]>='A')&&(shot[i]<='Z'))
{
//printf("> %c\n",shot[i]+('a'-'A'));
(cnt[shot[i]+('a'-'A')])++;
}
else{  
(cnt[(int)shot[i]])++;
}
}


for(i=0;i<256;i++)
{
if(cnt[i]>0)
if(((i>='a')&&(i<='z')))
printf("%c - %d\n",i,cnt[i]);
}
return 0;
}


