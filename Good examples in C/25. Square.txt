#include <stdio.h>

int main()
{

char name[]="Enes";
int i,j;

for(i=0; i<4; i++)
{
    for(j=0; j<4; j++)
    {
        if(i==0 || i==3 || j==0 || j==3)
        {
            printf("%c",name[j]);
        }
        else
            {
                printf(" ");
            }
    }
    printf("\n");
}


return 0;
}