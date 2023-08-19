#include <stdio.h>
#include <stdlib.h>


int main() {

	int i,j,l,k	;
	int n;
	scanf("%d",&n);

	for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }

    for(i=1; i<=n+1; i++)
    {
        printf("%d ",i);
    }
    printf("\n");

for(i=n; i>0; i--)
{
    for(j=0; j<=n-i; j++)
    {
        printf(" ");
    }
    for(j=1; j<=i; j++)
    {
        printf("%d ",j);
    }
    printf("\n");
}

	return 0;
}
