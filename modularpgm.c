#include<stdio.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int main()
{
    float n1,n2,result;
    int choice;
    printf("Enter two numbers\n");
    scanf("%f%f",&n1,&n2);
    printf("1.Addition\n"
            "2.Subtraction\n"
            "3.Multiplication\n"
            "4.Division\n"
            );
    printf("Enter choice\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=add(n1,n2);
        printf("Result is %f\n",result);
    }
    else if(choice==2)
    {
        result=subtract(n1,n2);
        printf("Result is %f\n",result);
    }
    else if(choice==3)
    {
        result=multiply(n1,n2);
        printf("Result is %f\n",result);
    }
    else if(choice==4)
    {
        if(n2!=0)
        {    result=divide(n1,n2);
            printf("Result is %f\n",result);
        }
        else
            printf("Enter valid value of n2\n");
    }
    else
        printf("Invalid choice\n");

    return 0;
}

float add(float a,float b)
{
    return a+b;
}
float subtract(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float divide(float a,float b)
{
    return a/b;
}