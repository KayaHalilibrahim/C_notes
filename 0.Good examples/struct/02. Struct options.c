#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef enum
{
   january=1,   // values ​​after that increase sequentially.
   fabruary,       //february=2...
   march,
   april,
   may,
   june,
   july,
   ougust,
   sebtember,
   october,
   november,
   december
}months;

void showmonth(months job)
{
    switch(job)
    {
        case january:printf("january");
         break;
         case fabruary:printf("fabruary");
         break;
         case march:printf("march");
         break;
         case may:printf("may");
         break;
         case april:printf("april");
         break;
         case june:printf("june");
         break;
         case july:printf("july");
         break;
         case ougust:printf("ougust");
         break;
         case sebtember:printf("sebtember");
         break;
         case october:printf("october");
         break;
         case november:printf("november");  // 11
         break;
         case december:printf("december");
         break;
         default:
         printf("wrong");
         break;
    }
}

int main()
{

months work=11;

showmonth(work);

 return 0;
}



