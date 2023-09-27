#include<stdio.h>
#include<stdlib.h>
#define power 4

#if !defined power || power <2             // If it doesn't provide them, it won't give an error.
#error power is not defined or less than 2
#endif

int main(){




    return 0;
    }