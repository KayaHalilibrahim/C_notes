#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

typedef struct
{
    int x;
    int y;
}point;

 point A;

A.x=3;
A.y=2;

 printf("on x:%d on y:%d",A.x,A.y);

 return 0;
}

