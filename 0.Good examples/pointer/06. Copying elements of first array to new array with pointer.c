#include <stdio.h>
#include <stdlib.h>

int main()
{


int n,i;
int *oldpt;

printf("how many elements you want in the array:");
scanf("%d",&n);

int oldarray[n];

oldpt=oldarray;


for(i=0; i<n; i++)
 {
     scanf("%d",oldpt);
     oldpt++;
 }
oldpt=oldarray;

printf("my old array:\n");

for(i=0; i<n; i++)
{
    printf("%d ",*oldpt);
oldpt++;
}
printf("\n");

oldpt=oldarray;

int newarray[n];
int *newpt;

newpt=newarray;


    for( i=0; i<n; i++)
    {
    *(newpt+i)=*(oldpt+i);
    }

    printf("my new array:\n");

    newpt=newarray;

    for(int i=0; i<n; i++)
    {
        printf("%d ",*(newpt+i));
    }


    return 0;
}



