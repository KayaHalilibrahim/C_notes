#include <iostream>
#include <stdio.h>

using namespace std;
  
int main()
{
    int value;    
    printf("Please enter a number: \n");
    scanf("%d",&value);
    printf("value: %d \n",value);    

    for(int i=0;i<2*value-1;i++){
        int k=0;
        for(int j=0;j<2*value-1;j++){
            printf(" %d",value-k);
            if(i<value){
                if(j>=(2*(value-1)-i)&&j>(value-2)){
                    if(k>0){
                        k--;
                    }                
                }
                else if(k<i &&k<value-1){
                    if(k<value){
                        k++;
                    }                                
                } 
            }

            else{
                int m=2*value-2-i;
                if(j>=(2*(value-1)-m)&&j>(value-2)){
                    if(k>0){
                        k--;
                    }                
                }
                else if(k<m &&k<value-1){
                    if(k<value){
                        k++;
                    }                                
                } 
            }           
        }
        printf("\n");
    }
    
    return 0;
}

/*

output:

Please enter a number:
6
value: 6
 6 6 6 6 6 6 6 6 6 6 6
 6 5 5 5 5 5 5 5 5 5 6
 6 5 4 4 4 4 4 4 4 5 6
 6 5 4 3 3 3 3 3 4 5 6
 6 5 4 3 2 2 2 3 4 5 6
 6 5 4 3 2 1 2 3 4 5 6
 6 5 4 3 2 2 2 3 4 5 6
 6 5 4 3 3 3 3 3 4 5 6
 6 5 4 4 4 4 4 4 4 5 6
 6 5 5 5 5 5 5 5 5 5 6
 6 6 6 6 6 6 6 6 6 6 6

*/