#include <stdio.h>
#include <stdlib.h>
#define length 5
#define length2 20
int main()
{

char array[length][length2];
char *pt1,*pt2;
int i;
char work;

pt1=array;


printf("please enter the 5 words:\n");

for(i=0; i<length; i++)
{
    printf("%d.word:",i);
    scanf("%s",array[i]);
}

for(i=0; i<length; i++)
{
    pt1=pt2=array+i;

         while(*pt2)
         {
             pt2++;
         }
            pt2--;

    while(pt1<pt2)
    {
        work=*pt1;
        *pt1=*pt2;
        *pt2=work;

        pt1++;
        pt2--;
    }
}

for(i=0; i<length; i++)
{
    printf("%s\n",*(array+i));
}

    return 0;
}



