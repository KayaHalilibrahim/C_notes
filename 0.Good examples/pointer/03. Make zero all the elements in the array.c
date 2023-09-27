#include <stdio.h>
#include <stdlib.h>

int main()
{
    .

/* int array[100];

 for(int i=0; i<100; i++)
 {
     array[i]=0;

 }


 for(int i=0; i<100; i++)

 {
     printf("%4d",array[i]);
 }*/


 int t[100];
 int i;
 int *pt;

 for(pt=t; pt<t+100; pt++)
 {
     *pt=0;
 }

 for(pt=t; pt<t+100; pt++)
 {
     printf("%4d",*pt);
 }
    return 0;
}


