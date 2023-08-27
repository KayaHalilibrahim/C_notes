#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct complex_number
{
    float reel;
    float virtual;

}complex;


void sum(complex n1,complex n2)
{
    complex result;

result.reel=n1.reel+n2.reel;
result.sanal=n1.virtual+n2.virtual;

  printf("%.2f +%.2fi",result.reel,result.virtual);


}
int main()
{

complex k1,k2;

printf("enter the number first:\n");
scanf("%f%f",&k1.reel,&k1.virtual);

printf("enter the number second:\n");
scanf("%f%f",&k2.reel,&k2.virtual);

sum(k1,k2);

    return 0;
}


