#include<stdio.h>
#include<stdlib.h>

void fibonacci(int x)
{
  int first=0;
  int second=1;
  int next;
  int i=0;

while (i<x)
{
  if (i<=1)
  {
    next=i;
  }
  else
  {
    next=first+second;
    first=second;
    second=next;

  }
  printf("%2d",next);
  i++;
}



}
int main()
{


int number;

printf("enter a number:\n");
scanf("%d",&number);

fibonacci(number);



}