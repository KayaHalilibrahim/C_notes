#include <stdio.h>
#include <stdlib.h>
#include<string.h>

union test  // same as struct just takes less space
            // the type that takes up large space shares with the small one.....
{
    int x,y;

};


int main()
{

union test t;

t.x=35;
t.y=25;

printf("value of the x:%d value of the y:%d",t.x,t.y);

printf("\n%d",sizeof(t)); // to calculate how much space it takes..

 return 0;
}




**************************************************


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct exm1
{
    int a;
    char b;
    long c;
};

union exm2
{
    int x;
    char y;
    long z;
};

int main()
{
printf("struct =%d byte\n",sizeof(struct exm1));
printf("union =%d byte\n",sizeof(union exm2));

    return 0;
}
 

