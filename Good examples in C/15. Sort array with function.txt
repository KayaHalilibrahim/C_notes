
#include<stdio.h>
#include<stdlib.h>

void sort(int sequence[],int x)
{

int i,j,temp;

for ( i=0; i<x-1; i++)
{
  for (j=0; j<x-1-i; j++)
  {
    if (dizi[j]>dizi[j+1])
    {
      temp=sequence[j];
      sequence[j]=sequence[j+1];
      sequence[j+1]=temp;
    
  }
  
}

}
}

int main()
{

int x,i;


printf("how big is the array:\n");
scanf("%d",&x);

int sequence[x];

srand(time(0));

for (i=0; i<x; i++)
{
  dizi[i]=rand()%70;
  printf("%d\n",dizi[i]);
}

printf("sequential state of the directory:\n");
siralama(sequence,x);

for (i=0; i<x; i++)
{
  printf("%4d",sequence[i]);
}

  return 0;
}