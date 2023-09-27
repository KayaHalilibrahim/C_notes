#include<stdio.h>
#include<string.h>

int main(){

char text[100];

printf("please enter a  text:");
scanf("%s",&text);

printf("text to your written:%s\n",text);

printf("new:%s",strrev(text));

    return 0;
}

***********************************
#include<stdio.h>
#include<string.h>

int main(){  // strlwr WRITE TEXT IN LOWER CAPITALS

char name[20];

printf("please enter name:");
scanf("%s",&name);

printf("the name you wrote:%s\n",name);
printf("new version:%s",strlwr(name));


    return 0;

}


***********************************

#include<stdio.h>
#include<string.h>

int main(){ // strupr WRITE TEXT IN CAPITAL CAPS

char name[20];

printf("please enter name:");
gets(name);

printf("the name you wrote;%s\n",name);
printf("new version:%s",strupr(name));


    return 0;
}

**************************************
#include<stdio.h>
#include<string.h>

int main(){ // strstr takes the part after the desired letters!!

char text[]="we learn c lenguage";

char *sub;

sub=strstr(text,"lea");
printf("your text :%s",sub);



    return 0;
}