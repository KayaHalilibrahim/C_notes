#include <stdio.h>
#include <stdlib.h>


int main() {

	int i,j,n,space;

	printf("Enter a number:");
	scanf("%d",&n);

for(i=0; i<n; i++)
{
    printf("* ");
}
printf("\n");

for(i=0; i<(n-2); i++)
{
    printf("*");
for(j=0; j<(2*n-3); j++)
{
    printf(" ");
}
printf("*\n");
}
for(i=0; i<n; i++)
{
    printf("* ");
}

	return 0;
}

/*

output:

Enter a number:5
* * * * *
*       *
*       *
*       *
* * * * *

*/