#include<stdio.h>
#include<stdlib.h>
 
 int main()
 {

int i;
int max,min;

printf("Enter elmenets:\n");


int sequence[3];

printf("please enter %d values:\n",3);

for ( i=0; i<3; i++)
{
  
  scanf("%d\n",&sequence[i]);
}
for ( i = 0; i <3; i++)
{
  printf("%4d\n",sequence[i]);
}
max=min=sequence[0];

for ( i=1; i<3; i++)
{
  if (sequence[i]>max)
  {
    max=sequence[i];
  }
  if (sequence[i]<min)
  {
    min=sequence[i];
  }
  
}
printf("maximum value:%d\n",max);
printf("minumum value:%d",min);


  return 0;
 }