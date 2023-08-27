#include <stdio.h>
#include <stdlib.h>

int work(int a)
{

if(a==0)
{
    return 0;
}
else if(a==1)
{
    return 1;
}
else
    {
        return (work(a-1)+work(a-2));
    }

}

int main()
{
 int a,i;


 printf("How many elements:");
 scanf("%d",&a);



 for(i=0; i<a; i++)
 {
     printf("%d\n",work(i));
 }




    return 0;
}





