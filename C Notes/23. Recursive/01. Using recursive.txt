#include <stdio.h>
#include <stdlib.h>

                             // use of functions inside a recursive function...


void list (int n)
{
    int i;
 if (n==0)
{
    printf("%d",n);
}
else
    {
        printf(" %d ",n);
        list(n-1);
    }

}


int main()
{
int n;

printf("please enter a number:\n");
 scanf("%d",&n);

 list(n);

    return 0;
}

