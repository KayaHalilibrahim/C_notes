#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char text[100];
int i=0;
int counter=0;

printf("please enter a text:\n");
gets(text);

while(text[i])
{
   if(text[i]==32)  // The maximum value of space is 32.
 {
    counter++;
 }
  i++;
}

printf("words number that in the text:%d",counter+1);

    return 0;
}