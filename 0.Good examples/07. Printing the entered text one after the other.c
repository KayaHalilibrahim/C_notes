#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char text[100];
int i=0;

printf("enter a text:\n");
gets(text);

for (i=0;text[i];i++)
{
    printf("%c\n",text[i]);
}

    return 0;
}