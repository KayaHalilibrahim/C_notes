#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[100];
    char *p1,*p2;
    int control;



    printf("Please enter a sentence with a maximum of 100 characters\n");
    gets(text);

    for(p2=text;*p2;p2++);

    p2--;


    control=1;
    for(p1=text;control && p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            kontrol=0;
        }
    }

    if(control)
    {
        printf("%s entered is a palendom",phrase);
    }
    else
    {
        printf("%s entered is not a palendrome", sentence);
    }
    return 0;
}