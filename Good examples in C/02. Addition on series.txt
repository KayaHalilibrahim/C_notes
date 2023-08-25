#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int i,n;
    float x,sequence;


    printf("Enter a positive number:\n");
    scanf("%d",&n);

    printf("real number : ");
    scanf("%f",&x);

    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }

    printf("sequence = %f",seri);
    return 0;
}
