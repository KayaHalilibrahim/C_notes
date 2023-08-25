#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

struct student_information
{
    char name[20];
    char surname[20];
    int number;
    int age;

};

struct student_information student_1,student_2;;

strcpy(student_1.name,"halil ibrahim"); // Assigning strings with strcpyyapılır
strcpy(student_1.surname,"kaya");
student_1.number=501020;
student_1.age=20;
printf("student 1\n");

printf("name:%s\n surname:%s\n number:%d\n age:%d\n",student_1.name,student_1.surname,student_1.number,student_1.age);


student_2=student_1;

printf("\n");

printf("student 2\n");
printf("name:%s\n surname:%s\n number:%d\n age:%d\n",student_2.name,student_2.surname,student_2.number,student_2.age);



return 0;
}


