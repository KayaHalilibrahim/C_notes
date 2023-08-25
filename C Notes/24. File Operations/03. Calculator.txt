#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *file;
int i,j;

file=fopen("acoounttable.txt","w");

for(i=0; i<=10; i++)
{
    for(j=0; j<=10; j++)
    {
        fprintf(file,"%d * % d : %d\n",i,j,i*j);
    }
    fprintf(file,"**************\n");
}

fclose(file);


    return 0;
}

// When you go to the file, there is a product of numbers from 1 to 10 in the content.
