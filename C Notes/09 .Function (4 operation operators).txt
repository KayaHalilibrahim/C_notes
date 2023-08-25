#include<stdio.h>
#include<stdlib.h>

 int proccess(int x,int y,char operator)
{

if (operator=='+')
{
    return x+y;
}
else if (operator=='-')
{
    return  x-y;
}
else if(operator=='*')
{
    return x*y;
}
else if (operator=='/')
{
    return x/y;
}
else
{
    printf("you entered wrong operator");
}

 

} 


int main(){

int a,b;
char operator;

printf("please enter a operator:");
scanf("%c",&operator);


printf("enter two number:\n");
scanf("%d%d",&a,&b);


printf("result:%d",proccess(a,b,operator));



    return 0;
}