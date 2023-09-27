#include<stdio.h>
#include<string.h>

int main(){

char name[30];

printf("please enter name:");
//gets(name);

fgets(name,sizeof(name),stdin);

printf("%s",name);


    return 0;
}