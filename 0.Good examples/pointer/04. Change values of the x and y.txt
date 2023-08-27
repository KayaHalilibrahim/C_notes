

1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
int number1,number2,value;
int *x,*y;


x=&number1;
y=&number2;

printf("please enter two number:\n");
scanf("%d%d ",x,y);

printf("before proccess x=%d  y=%d\n",*x,*y);

 value=*x;
 *x=*y;
 *y=value;

 printf("after procces\n x=%d y=%d",*x,*y);

    return 0;
}


2)
int value;

value=*a;
*a=*b;
*b=value;



}


int main()
{

int x,y;

printf("please enter two number:\n");
scanf("%d%d ",&x,&y);

printf("before proccess x=%d  y=%d\n",x,y);

work(&x,&y);

printf("x=%d y=%d",x,y);
    return 0;
}


