#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int enbuyuk (int A[],int elementsNumber)
{
  
int i,max;
enb=A[0];

for ( i=1; i<elementsNumber; i++)
{
  if (A[i]>max)
  {
    max=A[i];
  }
}

return max;


}

int main()
{

int n,i;

printf("how many numbers will be produced:\n");
scanf("%d",&n);

int sequence[n];

srand(time(0));  

printf("elements of sequences:\n");

for ( i=0; i<n; i++)
{
  dizi[i]=rand()%100;      // Returns a random number between 0 and 100...
  printf("%d\n",dizi[i]);
}
 
printf("\n largest:%d",largest(array,n) );

 

return 0;

}