#include <stdio.h>
#include <stdlib.h>
#include<string.h>

enum  colours
{
    blue,
    red,
    green,
    brown
};


int main()
{
enum colours kaya=blue;



printf("%d",kaya);

 return 0;
}

****************************************************


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef enum
{
    blue,
    red,
    green,
    brown
}colours;


int main()
{
colours kaya=blue;



printf("%d",kaya);

 return 0;
}


