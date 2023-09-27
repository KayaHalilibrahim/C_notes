int main()
{

FILE *file;
char name[20];

file=fopen("information.txt","a");



if(file==NULL)
{
    printf("file could not find.");
}
else

{
    printf("please enter a word:\n");
    gets(name);


    for(int i=0; name[i]; i++ )
    {
        putc(name[i],file);    // It allows them to enter one by one.
    }
 putc('\n',file);
}


    return 0;
}