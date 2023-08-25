#include <stdio.h>
#include <stdlib.h>

int main()
{


    int *ad1,*ad2,*ad;
    int n=10,p=20;

    ad1=&n;
    ad2=&p;

    printf("before asignment:%d\n",*ad1);
    printf("adress the ad1:%d\n",ad1);       //adress of n
    *ad1=*ad2+2;

    printf("after the assigment:%d\n",*ad1);
    printf("adress the ad1:%d",ad1);        // address is not change.
    return 0;
}


