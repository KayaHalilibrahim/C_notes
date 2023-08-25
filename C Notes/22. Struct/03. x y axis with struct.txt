#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct                   // if struct is point 
{
    float a,b;
    char name[10];

}point;


void print(point x[],int y)   // void print(struct point a[],int y)
{
    for (int i=0; i<y; i++)
    {
        printf("%s = (%.2f)(%.2f)\n ",x[i].name,x[i].a,x[i].b);
    }
}


int main()
{



 point star[5]={{3,4,"can"},{5,6,"halil"},{7,8,"ibrahim"},{9,10,"kaya"},{11,12,"enes"}};

print(star,5);

 return 0;
}




