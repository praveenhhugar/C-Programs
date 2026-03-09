#include<stdio.h>
int secondhighest(int arr[],int n);
int main()
{
    int n,i;
    printf("Enter n value\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter marks obtained by %d students\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result=secondhighest(arr,n);
    printf("The second highest marks is %d\n",result);
    
    return 0;

}
int secondhighest(int arr[],int n)
{
    int max1=-1,max2=-1,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if((arr[i]>max2)&&(arr[i]<max1))
        {
            max2=arr[i];
        }
    }
    return max2;
}