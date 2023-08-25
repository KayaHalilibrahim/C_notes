#include"stdio.h"
#include"stdlib.h"

int main()
{

FILE *file;

int n,i,numbers;


file=fopen("oddandeven.txt","w");


if(file==NULL)
{
    printf("file could not create.");
}

else
    {

printf("please enter the value of the n:");
scanf("%d",&n);

for(i=1; i<=n; i++)
{
if (i%2==0)
{
    fprintf(file,"%d=even\n",i);
}

else
{
    fprintf(file,"%d=odd\n",i);
}

}

    }

    fclose(file);

    printf("\n it was written to file.\n");

   printf("reading in the files information\n");

   file=fopen("oddandeven.txt","r");

   do
   {

    numbers=getc(file);

if(numbers!=EOF)
{
    putchar(numbers);
}


   }while(numbers!=EOF);


fclose(file);


    return 0;
}

