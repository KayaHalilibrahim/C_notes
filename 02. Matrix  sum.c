int mat1[3][4]={{1,2,3,4},{5,6,2,4},{2,5,3,9}};
int mat2[3][4]={{1,2,3,4},{5,6,2,4},{2,5,3,9}};

int sum[3][4];

int i,j;

for ( i=0; i<3; i++)
{
    for ( j=0; j<4; j++)
    {
        sum[i][j]=mat1[i][j]+mat2[i][j];
    }
    
}



for ( i=0; i<3; i++)
{
    for ( j=0; j<4; j++)
    {
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
    return 0;
} 