#include<stdio.h>
#include<stdlib.h>

int main(){

int val[2][3][2];

int i,j,k;

printf("enter 12 numbers\n");

for (i=0; i<2; i++)
{
    for(j=0; j<3; j++)
    {
        for(k=0; k<2; k++)
        {
           scanf("%d",&val[i][j][k]);    
        }
    }
}

printf("enetered values\n");

for (i=0; i<2; i++)
{
    for(j=0; j<3; j++)
    {
        for(k=0; k<2; k++)
        {
           printf("val[%d][%d][%d]=%d\n",i,j,k,val[i][j][k]);    
        }
    }
}

    return 0;

}