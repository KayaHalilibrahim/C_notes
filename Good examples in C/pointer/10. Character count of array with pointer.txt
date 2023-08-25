#include <stdio.h>
#include <stdlib.h>

int main()
{

char array[100];
char *pt;

printf("please enter the text:");
gets(array);

printf("your text:\n %s",&array);

printf("\n");


for(pt=array; *pt; pt++)   // *pt means continue until pt comes out
    {

    }
    printf(" text include %d character",pt-array);




    return 0;
}

