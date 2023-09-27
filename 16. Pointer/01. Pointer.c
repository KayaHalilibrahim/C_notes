#include<stdio.h>
#include<stdlib.h>

int main()
{
/*
int halil=4;
int *kaya;

kaya=&halil;

 printf("%d\n",*kaya);
printf("%d\n",kaya);
printf("%d\n",&halil);
printf("%d\n",halil); */

int *sayi;
int n;
n=20;

sayi=&n;



printf("%d\n",*sayi);
printf("%d\n",sayi);
printf("%d\n",n);
printf("%d\n",&n);

printf("*********\n");

*sayi=30;


printf("%d\n",n);
printf("%d",&n); 
    return 0;
}

