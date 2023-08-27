#include<stdio.h>
#include<stdlib.h>

int main()
{

char ch;
int row;

printf("Please enter a letter:");
scanf("%c",&ch);

if ((ch>='A')&&(ch<='Z'))
{
    order=(int)ch-(int)'A'+1;
}
else if ((ch>='a')&&(ch<='z'))
{
    order=(int)ch-(int)'a'+1;
}
else
{
    printf("wrongg!!");
}
printf("%d.letters",row);

    return 0;
}