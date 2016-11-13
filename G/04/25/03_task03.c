#include <stdio.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;
   getchar();
 
   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   printf(" %c - %d", ch, frequency);

   return 0;
}
