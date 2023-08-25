#include<stdio.h>
#include<stdlib.h>

int main()
{

FILE *file;

char numbers[10][10];
char names[10][20];
int grades[10];
int i=0;

 if((file=fopen("student.txt","r"))!=NULL)
{
    while(!feof(file))
    {
        fscanf(file,"%s %s %d",&numbers[i],&names[i],&grades[i]);
        printf("%s %s %d\n",numbers[i],names[i],grades[i]);
        i++;
    }
}



 else
   {
       printf("the file could not find.");
   }

   fclose(file);

    return 0;
}



