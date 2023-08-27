#include <stdio.h>
#include <stdlib.h>

struct fruits
{

    char name[10];
    int kg;
    char form[10];
    int grain;
    int price;
};

struct basket
{
    char frt[10];


};

int main()
{
int i;
int g=0,result=0;

struct fruit oz[2];
struct basket type[2];

for(i=0; i<2; i++)
{
    printf("Enter the name of the fruit:");
    scanf("%s",&tur[i].myv);

        printf("\n");

    printf("enter the weight of the fruit:");
    scanf("%d",&oz[i].kg);

        printf("\n");

   printf("Enter the form of the fruit:");
   scanf("%s",&oz[i].form);

        printf("\n");

   printf("Enter the price of the fruit:");
   scanf("%d",&oz[i].price);

        printf("\n");


    g=g+oz[i].kg ;
}

printf("total weight:");
printf("%d",g);

        printf("\n");


printf("total price:");
for(i=0; i<2; i++)
{
    if(strcmp(oz[i].formu,"round")==0)
    {
        result=2*(result+(oz[i].kg*oz[i].price));
    }
    else
    {
        result= result+(oz[i].kg*oz[i].price);
    }

}
printf("%d",result);

    return 0;
}