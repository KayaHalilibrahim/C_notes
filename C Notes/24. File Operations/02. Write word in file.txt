#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *file;

char name[]="kaya";

file=fopen("new","w");

fprintf(file,"in your text %s was written",name);

close(file);



    return 0;
}

/*

If you go to create file and open your new tex

'in your text kaya was written' is written...
*/