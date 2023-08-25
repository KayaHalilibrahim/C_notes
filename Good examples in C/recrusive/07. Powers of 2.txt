#include <stdio.h>
#include <stdlib.h>

int work(int number)
{

if(number==0)
{
    return 1;
}
else if(number==1)
{
    return 2;
}
else
{
    return ((2)*work(number-1));
}



}

int main()
{

int n;

printf("how many force:\n");
scanf("%d",&n);

printf("answer:%d",work(n));

    return 0;
}
