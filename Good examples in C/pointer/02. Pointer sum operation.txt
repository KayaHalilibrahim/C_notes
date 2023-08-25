#include <stdio.h>
#include <stdlib.h>

int main()
{
int number1,number2,sum;
int *ptr1,*ptr2;

ptr1=&number1;
ptr2=&number2;

printf("Please enter two number:\n");
scanf("%d %d",ptr1,ptr2);

sum =*ptr1+*ptr2;

printf("%d",sum);
    return 0;
}
