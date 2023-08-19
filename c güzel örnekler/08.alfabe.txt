#include <stdio.h>

int main()
 {
  int i,j,n;



  for(i=1; i<27; i++)
  {
      for(j=1; j<27-i; j++)
      {
          printf(" ");
      }
      for(j=1; j<=i; j++)
      {
          printf("%c ",96+j);
      }
      printf("\n");
  }

    return 0;
}