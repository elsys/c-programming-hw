#include <stdio.h>
int main ()
{   char c=' ', a= '*',b='#';
    int i, z, y, u=0,f=1,d=1,p=1;
    scanf("%d",&y);
    for(;d<y-2;d++)
        { p=p+2; f=f+p;}
    printf("%d\n",f);
    for(i=1; i<=y; ++i, u=0)
    {
        for(z=1; z<=y-i; ++z)
        {
            printf("%c",c);
        }
        while(u != 2*i-1)
        { if (i==y) {printf ("%c",a); } else
        if(u==0 || u==2*i-2) printf ("%c",a);else
            { printf("%c",b);}
                ++u;
        }
        printf("\n");
    }
    return 0;
}
