#include"stdio.h"
#include"stdlib.h"

int main()
{

FILE *file;

char row[30];
char *character;

file=fopen("information.txt","r");

if(file!=NULL)
{
    do
    {
        character=fgets(row,30,file);
        if(character!=NULL)
        {
            printf("%s",row);
        }
    }while(character!=NULL);
}

    return 0;
}



	