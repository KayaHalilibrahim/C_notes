#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *file;

file=fopen("student.text","a");  // To add new data

char name[20],surname[20],job[20];

printf("your name:\n");
gets(name);
printf("your surname:\n");
gets(surname);
printf("your job:\n");
gets(job);

fprintf(file,"%s\n %s\n %s\n",name,surname,job);

fclose(file);

    return 0;
}


// if we use "w", the previous data is deleted instead new data is added
// if we use "a", it adds data over the previous data
// To use "a", there must be a file named student beforehand...