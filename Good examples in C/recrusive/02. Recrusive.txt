#include <stdio.h>
#include <stdlib.h>

int main()
{

int mlt(int x,int y)
{

    int result;

    if(y==1)
{
    result=x;
}


else
    {
        result=x+mlt(x,y-1);
    }

    return result;
}

int a,b;

printf("please enter two number:\n");
scanf("%d%d",&a,&b);

printf("%d.%d=%d",a,b,mlt(a,b));


           return 0;
}

