#include <stdio.h>
#include <stdlib.h>

int account(int number,int i)
{

if(i==1)
{
    return 1;
}
else if(number%i==0)
{
    return 0;
}
else
{
    account(number,i-1);
}


}

int main()
{
    int i,result,n;

    printf("please enter a number:");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        result=account(i,i/2);

        if(result==1)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}
