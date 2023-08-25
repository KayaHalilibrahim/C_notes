#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;
int n=5;
int i;

ptr=(int*)calloc(n,sizeof(int));   // used in the same way

if(ptr==NULL)
{
    printf("didn't become");
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
        free(ptr);    // deletes after operation, does not leave it in storage...
    }
    return 0;
}
