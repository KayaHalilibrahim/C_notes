
#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;
int n=5;
int i;

ptr=(int*)malloc(n*sizeof(int));

if(ptr==NULL)
{
    printf("doesn't become");
}
else
    {
        for(i=0; i<n; i++)
        {
            ptr[i]=i+1;
        }
        printf("my elements: \n ");

        for(i=0; i<n; i++)
        {
            printf("%d ,",ptr[i]);
        }
    }
    return 0;
}


