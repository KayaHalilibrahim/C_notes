#include <stdio.h>
#include <stdlib.h>


void work (char *text,int length)
{
if(length==0)
{
    printf("%c",text[length]);
}
else
 {
    printf("%c",text[length]);
    work(text,length-1);
 }


}


int main()
{

char text[100];

printf("please enter a text:\n");
gets(text);

work(text,strlen(text)-1);


    return 0;
}

