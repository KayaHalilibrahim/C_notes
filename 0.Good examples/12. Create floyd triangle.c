#include<stdio.h>
#include<stdlib.h>

void array(int x)
{

int i=1;
int j;
int a=1;

while(i<=x)
{
    j=1;
    while (j<=i)
    {
       printf("%4d",a);
       a++;
       j++;
    }
    
printf("\n");
i++;


}


}


int main()
{

int row;

printf("enter a number:\n");
scanf("%d",&row);

array(row);


}