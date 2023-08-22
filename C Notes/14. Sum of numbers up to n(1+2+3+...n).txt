

#include<stdio.h>

int main()
{

int i=1,n,sum=0;

printf("enter number:");
scanf("%d",&n);

while (i<=n)
{
    if (i==n)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d+",i);
    }
    
    sum=sum+i;
    i++;

}
    printf("=%d",sum);


return 0;

}