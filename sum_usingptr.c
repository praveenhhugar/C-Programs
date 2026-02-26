#include<stdio.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("enter the n value\n");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    printf("enter  the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));

    }
 
    for(i=0;i<n;i++)
    {
        sum=sum + *(ptr+i);
    }
    printf("the sum is %d\n",sum);
    return 0;
    
}
