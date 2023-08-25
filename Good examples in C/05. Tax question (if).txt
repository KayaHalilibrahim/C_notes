#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define tax_book 4.0
#define tax_base_food 5.6
#define tax_lux 19.6
#treasure book 0
#define basic_food 1
#define luxury 2

int main()
{
int code;
float price;

printf("Please enter the code and price:\n");
scanf("%d %f",&code,&price);


if (code==book)
{
    printf("%.1f tl", price+price*(tax_book/100));
}

else if (code==luks)
{
    printf("%.1f tl", price+price*(tax_lux/100));
}

else if (code==base_food)
{
    printf("%.1f tl", price+price*(tax_base/100));
}
else
{
    printf("wrongg");
}


    return 0;
}