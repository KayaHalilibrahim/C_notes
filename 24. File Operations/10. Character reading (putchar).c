// printing the data in the file to the screen character by character...


#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *kaya;

    char ch;


    kaya=fopen("text.txt","r");

    if(kaya==NULL)
    {
        printf("this file is empty.");
    }
    else
    {


        do
    {
        ch=getc(kaya);
        if(ch!=EOF)
        {
            fputchar(ch); 
        }

    }while(ch!=EOF);



    fclose(kaya);
}

    return 0;
}
