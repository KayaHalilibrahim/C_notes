#include<stdio.h>
#include<stdlib.h>

int evenoradd(int value)
{

if(value%2==0)
{
    return 1;
}
else
{
    return 0;
}


}


int main(){

int number,result;

printf("enter a number:");
scanf("%d",&number);

 result=evenoradd(number);

if (result==1)
{
    printf("this number is even");
}
if (result==0)
{
    printf("this number is add");
}


    return 0;
}