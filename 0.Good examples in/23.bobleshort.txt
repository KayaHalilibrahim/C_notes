int swap(int *a,int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;

}


#include<stdio.h>
#include<stdlib.h>

int main()
{

    int i,j,temp;
    int  array[]={1,20,8,40,50};

    for(i=0; i<5; i++)
    {
     for(j=0; j<5; j++)
     {
         if(array[i]<array[j])
         {
            swap(&array[i],&array[j]);
         }
     }
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",array[i]);
    }


    return 0;
}
