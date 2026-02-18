#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,j,flag=1;
    printf("Enter m and n values\n");
    scanf("%d%d",&m,&n);
    if(n<m)
    {
        printf("Invalid range\n");
        exit(0);
    }
    printf("prime numbers between %d and %d are\n",m,n);
    for(i=m;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if((i%j)==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%4d",i);
    }
}