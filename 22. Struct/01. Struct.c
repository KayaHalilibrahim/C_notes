#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

struct student
{
  char name[20];
  char surname[20];
  int age;

};


// struct student A={"halil ibrahim","kaya",20}; --> we can write like this.


struct student A;

strcpy(A.name,"halil ibrahim");
strcpy(A.surname,"kaya");
A.age=20;

printf("name:%s\t surname:%s\t age:%d",A.name,A.surname,A.age);


    return 0;
}


