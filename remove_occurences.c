#include<stdio.h>
int main()
{
    char ch,str[50];
    int i=0,j=0;
    printf("Enter string value\n");
    scanf("%s",str);
    printf("Enter character to be removed\n");
    scanf(" %c",&ch);
    while(str[i]!='\0')
    {
        if(str[i]!=ch)
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("The resultant sttring is %s\n",str);
    return 0;
}