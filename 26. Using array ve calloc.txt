#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;
int n=5;
int i;
int a[n];

ptr=(int*)calloc(n,sizeof(int));

if(ptr==NULL)
{
    printf("didn't become");
    exit(0);
}
else
    {
        for(i=0; i<n; i++)
        {
            ptr[i]=i+1;
            a[i]=i+1;
        }
        printf("my elements: \n ");

        for(i=0; i<n; i++)
        {
            printf("%d-%d ,",ptr[i],a[i]);
        }

    }
    return 0;
}

/* 

my elements:
 1-1 ,2-2 ,3-3 ,4-4 ,5-5 ,
*/