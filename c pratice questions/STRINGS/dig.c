#include<stdio.h>
void main ()
    {
        int array[10][10];
        int i,j,m,n,sum = 0;
        printf("Enetr the order of the matix \n");
        scanf("%d %d", &m, &n);
        if (m==n) 
        {
            printf("Enter the  matrix\n");
            for (i=0;i<m;i++)
            {
                for (j = 0;j<n;j++)
                {
                    scanf("%d",&array[i][j]);
                }
            } 
            printf("The given matrix is \n");
            for (i=0;i<m;++i++) 
            {
                for (j=0;j<n;j++)
                {
                    printf("%d",array[i][j]);
                }
                printf("\n");
            }
            for (i=0;i<m;i++) 
            {
                sum=sum+array[i][i];
            }
            printf("\nThe sum of the main diagonal elements is = %d\n", sum);
        }
    }