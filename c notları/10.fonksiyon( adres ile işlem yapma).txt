#include<stdio.h>
#include<stdlib.h>

void   square(int*a,int* b)
{ 

*b=*a**a;

 
}
int main(){

int x,y;

x=6;

square(&x,&y);

printf("%d",y);


    return 0;
}
