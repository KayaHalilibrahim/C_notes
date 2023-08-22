#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;

    dosya=fopen("new text.txt","w");
    fclose(dosya);


    return 0;
}
