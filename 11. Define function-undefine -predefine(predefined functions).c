#include<stdio.h>

int main(){ // functions defined in include

printf("file :%s\n",__FILE__);
printf("date:%s\n",__DATE__);
printf("time:%s\n",__TIME__);
printf("line:%d\n",__LINE__);
printf("stdc:%d\n",__STDC__);


    return 0;
}

*******************************
#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
#define area(r) (pi*r*r)

int main(){ 
 
float radius,result;

printf("enter the radius value:");
scanf("%f",&radius);

result=area(radius);

printf("our area:%f",result);

    return 0;
}

// undef removes the defined function.