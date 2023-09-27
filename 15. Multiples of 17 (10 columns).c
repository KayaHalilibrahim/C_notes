#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int satir=0;

    printf("enter value of the n:");
    scanf("%d",&n);
    
    int i=0;

while (i<=n)
{
   if (i%17==0)
   {
    printf("%5d",i);
    satir++;
    if (satir%10==0)
    {
        printf("\n");
    }
    
   }
   i++;
}

return 0;

}