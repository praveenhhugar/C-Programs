#include<stdio.h>
int binarysearch(int *ptr,int n,int key);
int main()
{
    int arr[50],n,i,pos,key;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d sorted elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter key element\n");
    scanf("%d",&key);
    pos=binarysearch(arr,n,key);

    if(pos!=-1)
        printf("Element found at %d\n",pos);
    else
        printf("Element not found\n");
    return 0;
}

int binarysearch(int *ptr,int n,int key)
{
    int low=0,high=n-1,mid;
    while(low<high)
    {
        mid=(low+high)/2;

        if(*(ptr+mid)==key)
            return mid;

        else if(*(ptr+mid)<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}