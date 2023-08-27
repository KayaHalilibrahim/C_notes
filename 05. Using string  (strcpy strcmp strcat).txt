 #include<stdio.h>
#include<string.h>

 // here is important!!

 int main()
 {
/* 
 char array[]="kaya";

 printf("size of the array= %d\n",strlen(array));
 printf("size of the array=%d",sizeof(array)); // do not forget \0 !!! */
 

// ***strcmp*** prints 1 if it is correct, 0 if it is incorrect, according to the size of the place it holds.
 
 /* int result;
 char array1[20]="a";
 char array2[20]="A";

 result=strcmp(array1,array2);
 
 if (strcmp<0)
 {
     printf("A greater than a");
 }
 else if (strcmp>0)
 {
    printf("a greater than A");
 }
 else
 {
    printf("both of them are equal");
 }
 
// strncmp compare up to n elements
  */


 /* // ***** strcpy****

 char a1[]="halil";
 char a2[20];

strcpy(a2,a1);

printf("%s",a2);

// strncopy copy as many as n characters strncopy (a2,a1,2) If burd is required to assign something to a2 (char a2[20]="").
 */




// ****strcat= concatenates two strings***

char empty[100];

strcpy(empty,"my ");

strcat(empty,"name is ");
 strcat(empty,"halil");


printf("%s",empty);


// strncatn. concatenate up to element
    return 0;
 }


/*

 %[^\n]s == acts as gets...

*********************
tolower= printf(%c)  >>>>>prints the entered letter in lowercase....

*/
