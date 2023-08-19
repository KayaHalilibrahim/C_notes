#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

char array[]={1,50,40,21};

int i,j,temp;

for(i=0; i<4-1; i++)
{
    for(j=0; j<4-1-i; j++)
    {
        if(array[j]>array[j+1])
        {
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
    
    
}

for(i=0; i<4; i++)
{
    printf("%d ",array[i]);
}
  
    
    
    return 0;
}