// Allows us to update the area we previously allocated with malloc calloc.
// allows it to be expanded, for example, if the storage space is insufficient..(update)..

// read information from the file line by line and write it to the console


#include <stdio.h>
#include <stdlib.h>

int main()
{

int* ptr;
int n=5;
int i;

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
        }
        printf("my elements: \n ");

        for(i=0; i<n; i++)
        {
            printf("%d ,",ptr[i]);
        }
        n=10;
        ptr=(int*)realloc (ptr,n*sizeof(int));
        printf("\nsuccesfull\n");

        for(i=5; i<10; i++)
        {
            ptr[i]=i+1;
        }
        for(i=0; i<10; i++)
        {
            printf("%d ,",ptr[i]);
        }
    }
    return 0;
}

/*

******************

my elements:
 1 ,2 ,3 ,4 ,5 ,
succesfull
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,

*/