// read information from the file line by line and write it to the console


#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *kaya;

    char ch[100],*ch2;


    kaya=fopen("text.txt","r");

    if(kaya==NULL)
    {
        printf("this file is empty.");
    }
    else
    {


        do
    {
        ch2=fgets(ch,100,kaya);
        if(ch!=NULL)
        {
            printf("%s",ch);
        }

    }while(ch2!=NULL);



    fclose(kaya);
}

    return 0;
}


