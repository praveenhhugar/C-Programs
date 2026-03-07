#include<stdio.h>
#include<string.h>
void main()
{
    char *name;
    int length;
    name="DELHI";
    char *cptr=name;
    printf("%s\n",name);
    while(*cptr!='\0')
    {
        printf("%c stored at address %u\n",*cptr,cptr);
        cptr++;
    }
    length=cptr-name;
    printf("\nLength of the string = %d\n",length);

}