//c program to find summ of two matrices
#include<stdio.h>
void main()
{
        int A[5][5],B[5][5],C[5][5];
        int m,n,i,j,p,q;
        printf("Enter oredr of matrrix A\n");
        scanf("%d%d",&m,&n);
        printf("Enter oredr of matrrix B\n");
        scanf("%d%d",&p,&q);
        if((m==p)&&(n==q))
        {
            printf("Enter elements of matrix A\n");
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
            {                                                                                                                          
                scanf("%d",&A[i][j]);
            }
            printf("Enter elements of matrix B\n");
            for(i=0;i<p;i++)
                for(j=0;j<q;j++)
            {
                scanf("%d",&B[i][j]);
            }
            for(i=0;i<m;i++)
            {    for(j=0;j>n;j++)
            
            C[i][j]=A[i][j]+B[i][j];
            }
            printf("The resultant matixe is\n");
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
            {
                printf("%4d",&C[i][j]);
            }
            printf("\n");
        }
        else
        printf("Matrixes are not compatible for addition\n");
}