#include <stdio.h>
#include <stdlib.h>
#define length 5
#define length2 20
int main()
{

char *days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
int i;

  do
  {
      printf("please enter a number:"); // as long as it provides value whileyazdırır..
  scanf("%d",&i);
  }
  while(i<0 || i>7);

printf("%d.day:%s",i,days[i-1]);

    return 0;
}


