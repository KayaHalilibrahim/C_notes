#include <stdio.h>
#include <stdlib.h>


void work (int x)
{
    int i;

if(x==0)
{
    return 0;
}

else
{
  for(i=0; i<x; i++)
  {
      printf(" *");

  }
  printf("\n");
  work(x-1);
}

}


int main()
{

int n;

printf("How many elements:\n");
scanf("%d",&n);


work(n);

    return 0;
}


