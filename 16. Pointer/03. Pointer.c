#include <stdio.h>
#include <stdlib.h>

void function(int* x,int* y)
{
int z=*x;
 *x=*y;
 *y=z;

 printf("\nafter function:\n a:%d b:%d",*x,*y) ;




}

int main()
{
    int a=10,b=20;

printf("before function:\n a:%d b:%d\n",a,b);


function(&a,&b);

    return 0;

}


************************************************


#include <stdio.h>
#include <stdlib.h>

void function(int* x,int* y)
{
int z=*x;
 *x=*y;
 *y=z;






}

int main()
{
    int a=10,b=20;

printf("before function:\n a:%d b:%d\n",a,b);


function(&a,&b);
 printf("\nafter function:\n a:%d b:%d",a,b) ;

    return 0;
}



