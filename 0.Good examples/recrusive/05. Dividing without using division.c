#include <stdio.h>
#include <stdlib.h>

int divide(int a,int b)
{

   if(b==0)
   {
       return 0;
   }
    else if(a-b==0)
    {
        return 1;
    }
    else
    {
        return (1+divide(a-b,b));
    }




}

int main()
{
 int a,b;

 printf("please enter value of the a:\n");
 scanf("%d",&a);

 printf("please enter value of the b:\n");
 scanf("%d",&b);

divide(a,b);

printf("answer:%d",divide(a,b));


    return 0;
}

