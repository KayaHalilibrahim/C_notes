#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *kaya;

  char character;

  if((kaya=fopen("information.txt","r"))==NULL)
  {
     printf("file could not create.");
  }
else
{
     do
     {
         character=getc(kaya);

         if(character!=EOF)
         {
             putchar(character);
         }
     }while(character!=EOF);
}

fclose(kaya);


    return  0;
}

