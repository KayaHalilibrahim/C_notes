#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define exactly 150

int main()
{
    int no,height,difference,minBoy,minNo;
   /* printf("Student number: \n");
    scanf("%d",&no);
    printf("Student height: \n");
    scanf("%d",&size); */

    minno=no;
    difference=abs(height-full);

    while(no>0)
    {
        printf("\nStudent no: ");
        scanf("%d",&no);
        printf("\nStudent height:");
        scanf("%d",&size);

        if(abs(height-full)<difference)
        {
            difference=abs(height-full);
            minno=no;
            minboy=height;
        }
    }

    printf("\nThe student numbered %d is closest to %d cm with %d cm height",minno,minboy,full);
    return 0;
}