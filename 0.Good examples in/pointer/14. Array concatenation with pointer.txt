#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;


    printf("enter the length array1:");
    scanf("%d",&n);

    int array1[n];
    int *pt1;
    pt1=array1;

    printf("array1:\n");

    for(pt1=array1; pt1<array1+n; pt1++)
    {
        scanf("%d",pt1);
    }

    printf("\n");

    printf("enter the length array2:");
    scanf("%d",&m);

    int array2[m];
    int *pt2;
    pt2=array2;

    printf("\n");

    printf("array2:\n");

    for(int i=0; i<m; i++,pt2++)
    {
        scanf("%d",pt2);
    }


    printf("array 1=");
    for(pt1=array1; pt1<array1+n; pt1++)
    {
        printf(" %d ",*pt1);
    }

    printf("\n");

printf("array 2=");
    for(int i=0; i<m; i++)
    {
        printf(" %d ",*(array2+i));
    }

    for(pt1=array1+n,pt2=array2; pt2<array2+m; pt1++,pt2++)
    {
        *pt1=*pt2;
    }


printf("\nboth of array: ");

pt1=array1;
    pt2=array2;

for(int i=0; i<n+m; i++)
    {
     printf("%4d",*(pt1+i));
    }

    return 0;
}



