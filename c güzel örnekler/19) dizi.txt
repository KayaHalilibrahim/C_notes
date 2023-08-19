#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

int x;


int i,j,space;

printf("please enter a number:");
scanf("%d",&x);

space=x-1;


for(i=1; i<=x; i++)
{

    for(j=1; j<=space; j++)
    {
        printf(" ");
    }
            space--;

    for(j=1; j<=2*i-1; j++)
    {
        printf("c");
    }
    printf("\n");


}


return 0;
}

***************

output:

please enter a number:10
         c
        ccc
       ccccc
      ccccccc
     ccccccccc
    ccccccccccc
   ccccccccccccc
  ccccccccccccccc
 ccccccccccccccccc
ccccccccccccccccccc


