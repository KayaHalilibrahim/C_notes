#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *file;

file=fopen("student.text","a");  //To add a new data.

fputs("hello world",file);

fclose(file);

    return 0;
}



//it write "hello world" in the file of student.