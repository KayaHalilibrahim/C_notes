#include<stdio.h>
#include<stdlib.h>

int function(int x)
{

int i=1;
int result=0;

while (i<x)
{
    
if (x%i==0)
{
result=result+i;

}
i++;
}

return result;

}
int main()
{

int number;

printf("enter a number:\n");
scanf("%d",&number);

function(number);

printf("%d",function(number));


    return 0;
}