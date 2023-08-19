#include <stdio.h>
#include <stdlib.h>



int proccess (int a)
{


if(a==1)
  {
      return 1;
  }
else
  {
      return a+proccess(a-1);
  }


}


int main()
{
int n,result;

printf("please enter a number:");
scanf("%d",&n);

result=proccess(n);
printf("result:%d",result);

    return 0;
}
