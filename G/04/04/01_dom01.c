#include<stdio.h>
int main()
{
int broi,br;
int mas[broi];

scanf("%d", &broi);

for(br=1;br<=broi;br++)
{
scanf("%d", &mas[br]);
}
for(br=broi;br>0;br--)
{
printf("%d\n", mas[br]);
}
return 0;
}



