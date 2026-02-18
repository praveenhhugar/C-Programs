#include<stdio.h>
void main()
{
    int i,n;
//     for(i=0;i<=100;i++)
//     {
//         if(i%2!=0)
//         printf("%d",i);
//         printf("\n");
//     }
// }
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d",n*i);
        printf("\n");
    }
}