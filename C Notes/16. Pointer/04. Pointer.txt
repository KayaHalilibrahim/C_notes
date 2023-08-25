#include <stdio.h>
#include <stdlib.h>

int main()
{

char work[100]="kayaHalil";
char *p1;
p1=work;   // p1=&work[0];


printf("4.elemets in the array:%c\n",work[3]);
printf("1.elemts in the array:%c\n",*p1);    //  work[0]
printf("4.elemts in the array:%c",*(p1+3));

    return 0;
}




*****************************************

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[]={10,20,30,40,50};

   int *ptr;           //int=>4 bit 

   ptr=arr;

   printf("1.eleman:%d\n",*ptr);
   printf("2.eleman:%d\n",*(ptr+1));
   printf("5.eleman:%d\n",*(ptr+4));
    return 0;
}






/* for example if 10=1000 bits
20=1004 ,30=1008 bits
here the value +1 takes up 4 bits!!! */