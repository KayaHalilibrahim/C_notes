#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{

int array[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int *pt;

pt=array;

for(int i=0; i<15; i++)
{
    printf(" %d ",array[i]);
}


printf("\n add numbers:");
for(pt=array+1; pt<array+15; pt+=2)// tek sayılar için
{
    printf(" %d ",*pt);
}

 printf("\n even numbers:");

for(pt=array; pt<array+15; pt+=2)
{
    printf(" %d ",*pt);
}


    return 0;
}



