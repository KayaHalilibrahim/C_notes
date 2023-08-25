
#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{

   int i,max,min;
   int array[size];
   int *kaya;

   kaya=dizi;


   printf("Enter elements of array:\n");


   for(kaya=dizi; kaya<(array+size); kaya++)
   {
       scanf("%d",kaya);
   }

   max=min=array[0];   // first element of array

for(kaya=(array+1); kaya<(array+size); kaya++)
{
    if(*(kaya)>max)
    {
        max=*kaya;
    }


}
printf("greatest value:%d\n",max);

for(kaya=dizi; kaya<(dizi+size); kaya++)
{
    if(*(kaya)<min)
    {
        min=*kaya;
    }
}
printf("smallest value:%d",min);

    return 0;
}

