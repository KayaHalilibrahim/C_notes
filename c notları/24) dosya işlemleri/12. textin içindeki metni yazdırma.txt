#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

FILE *pt;

char character;

if((pt=fopen("new.txt","r"))!=NULL)
{
    character=fgetc(pt);

    while(character!=EOF)
    {
        printf("%c",character);
        character=fgetc(pt);
    }

}

else
{
    printf("the file could not find.");
}
  fclose(pt);

    return 0;
}
