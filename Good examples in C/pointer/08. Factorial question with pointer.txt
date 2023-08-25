#include <stdio.h>
#include <stdlib.h>

void proccess(int *x)
{
    int i;
    int result=1;

    for(i=*x; i>=1; i--)
    {
        result=result*(*x);
       (*x)--;
    }

    printf("%d",result);
}

int main()
{
int n;

printf("enter a number:\n");
scanf("%d",&n);


proccess(&n);

    return 0;
}
