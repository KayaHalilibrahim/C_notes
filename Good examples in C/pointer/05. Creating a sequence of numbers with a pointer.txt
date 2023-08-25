int main()
{
int n,i;
int *ptr;

printf("how many elements:");
    scanf("%d\n",&n);

int array[n];
ptr=array;  // ptr=&array[0];


 for(i=0; i<n; i++)
{
    scanf("%d",ptr);
ptr++;
}

ptr=array;

for(i=0; i<n; i++)
{
    printf("%d\t",*ptr);
    ptr++;                  //*(ptr+i); = ptr ++;
}
    return 0;
}

