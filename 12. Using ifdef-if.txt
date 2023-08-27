#include<stdio.h>
#include<stdlib.h>
#define pi 3.14


int main(){ 
 
#ifdef pi          // If the macro is defined, it will be printed...
printf("kaya\n");
#endif             // use when finished..

#ifdef pii // If the macro is not defined, it will not be printed.
printf("kaya");
#endif

#ifdef pii         // If macrp is not defined, else is printed.
printf("kaya");
#else
printf("halil");
#endif

    return 0;
}

*****************************
#include<stdio.h>
#include<stdlib.h>
#define number 7

int main(){ 

#if (number==7)
printf("number:%d\n",sayi);
#endif


#if sayi==6            // if wrong, it write else
printf("number:%d",sayi);
#else
printf("6 is wrong"); // write this
#endif

    return 0;
}


