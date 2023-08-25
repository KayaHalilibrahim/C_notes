#include <stdio.h>
#include <stdlib.h>

int main()
{

int n,work;

printf("how many elemnts in the array you want:");
scanf("%d",&n);

int array[n];
int *pt1,*pt2;

pt1=array;

for(pt1=array; pt1<array+n; pt1++)
{
    scanf("%d",pt1);
}



printf("\n");

printf("my old array:");

for(pt1=array; pt1<array+n; pt1++)
{
    printf("%4d",*pt1);
}
printf("\n");

printf("my new array: ");

for(pt1=array,pt2=array+n-1; pt1<pt2; pt1++,pt2--)
{
    work=*pt1;
    *pt1=*pt2;
    *pt2=work;
}
for(pt1=array; pt1<array+n; pt1++)
{
    printf("%4d",*pt1);
}

printf("\n");



    return 0;
}



