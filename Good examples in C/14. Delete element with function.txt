#include<stdio.h>
#include<stdlib.h>

void deleteRegister(int A[],int row,elementsCount)
{

int i;
if (order>=elementCount+1)
{
  printf("Enter a valid serial number.");
}
else
{
  for ( i=row-1; i<elementCount-1; i++)
  {
    A[i]=A[i+1];
  }
  printf("Status after record deletion:\n");

  for ( i = 0; i <elementCount; i++)
  {
    printf("%d\n",A[i]);
  }
  
}

}

int main()
{

int n,i,sirano;

printf("how many numbers:\n");
scanf("%d",&n);

int array[n];

srand(time(0)); // we use it to get different value each time

for ( i=0; i<n; i++)
{
   array[i]=rand()%50;
   printf("%d\n",array[i]);
}

printf("\nEnter the serial number of the value to be deleted:\n");
scanf("%d",&orderNo);

record(array, orderNo, n);

  return 0;
}