#include <stdio.h>
#include <stdlib.h>

int main()
{
// fgetc() allows reading characters.
    // fscanf() reads a formatted string.


    // reads the first letter of the character string in the working text in the fileproccess file.

    FILE *file;

    char name[20];
    char surname[20];
    int number;

   // file=fopen("successfull.txt","r");

    if((file=fopen("successfull.txt","r"))!= NULL)
    {
       
       k=fgetc(file);   
       fscanf(file,"%s",&name);
       fscanf(file,"%s",&surname);
       fscanf(file,"%d",&number);

       printf("%s %s %d ",name,surname,number);
       printf("%c",k);

    }
    else
    {
        printf("it was not find");
    }

fclose(file);

    return 0;
}



/*
 output:
 alil ibrahim kaya
 h
*/