#include <stdio.h>
#include <stdlib.h>

struct valuetype
{
    int type;

    union
    {
    char snow;
    float number;

    }One;
};



int main()
{

struct valuetype values[20];
char row;
int i=-1;
int j;
int n=0;
float average=0.0;




do
{
    i++;

  printf("Please enter an integer:\n");
    scanf("%d",&values[i].tip);

  scanf("%c",&line); // so that it doesn't give an error..

    if(values[i].tip==1)
    {
        printf("Enter character:\n");
        scanf("%c",&values[i].a.snow);

            scanf("%c",&line);

    }
    else if(values[i].tip==0)
    {
        printf("Enter real number:");
        scanf("%f",&values[i].one.number);
    }

}while(values[i].tip==0 || values[i].tip==1);


for(j=0; j<=i; j++)
{
    if(values[j].tip==0)
    {
    mean+=values[j].one.number;
    n++;
    }
}

    mean=mean/n;

    printf("average of real numbers: %f",average);

    return 0;
}