#include<stdio.h>
int maximum(int a,int b);
int minimum(int a,int b);
int main()
{
    int max,min,i,n;
    int num[n];
    printf("Enter size of array\n");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(i=1;i<n;i++)
    {
        max = maximum(max,num[i]);
        min = minimum(min,num[i]);
    }
    printf("Maximum value is %d\n",max);
    printf("Minimum value is %d\n",min);
    return 0;
}
int maximum(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int minimum(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}