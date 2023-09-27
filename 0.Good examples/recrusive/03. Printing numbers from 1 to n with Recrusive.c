#include <stdio.h>
#include <stdlib.h>


void odd(int beganvalue,int finishvalue)
{

    int result;

    if(beganvalue<=finishvalue)
{
printf(" %d ",beganvalue);
odd(beganvalue+2,finishvalue);
}


}


int main()
{

int a,fix;

printf("please enter two number:\n");
scanf("%d",&a);


if(a%2==1)
{
    fix=a;
}
else
    {
        fix=a-1;
    }

odd(1,a);


           return 0;
}

