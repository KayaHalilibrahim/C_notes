#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{

char array[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','x','\0'};
char *pt1,*pt2;

pt1=array;



for(pt2=pt1; *pt2; pt2++)
{
    printf("%c",*pt2);
}


    return 0;
}
