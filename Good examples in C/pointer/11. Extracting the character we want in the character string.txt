#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{

char array[100];
char *pt;
char character;

printf("please enter the text:");
gets(array);

printf("\n");


printf("which word you do not want:");
scanf("%c",&character);

 for(pt=array; *pt; pt++)   // *pt means continue until pt comes out
  {
if (*pt==character)
    {
        strcpy(pt,(pt+1));
    }

  }


printf("after proccess your text:%s",array);

printf("\n");

    return 0;
}







////////////////////////////////////////////
             other path

#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{

char array[100];
char *pt;
char character;

printf("please enter the text:");
gets(array);

printf("\n");


printf("which word you do not want:");
scanf("%c",&character);
pt=array;
 while( *pt )   //*pt means continue until pt comes out
{
if (*pt==character)
    {
        strcpy(pt,(pt+1));
    }
pt++;
}


printf("after proccess your text:%s",array);

printf("\n");

    return 0;
}





