#include <stdio.h> 


int main()
{
    int a[2][2],b[2][2],res[2][2];
    //taking input using nested loops
    printf("Enter the elememts of the first matrix\n");
    for(int i=0;i<2;i++)
    {
        for (int j=0; j<2;j++)

        {
        printf("Elementss a%d%d",i+1,j+1);
        scanf("%d",&a[i][j]);    /* code */
        }
        
    }
    printf("Enter the elememts of the second matrix\n");
    for(int i=0;i<2;i++)
    {
        for (int j=0; j<2;j++)

        {
        printf("Elementss b%d%d",i+1,j+1);
        scanf("%d",&b[i][j]);    /* code */
        }
        
    }
    
     for(int i=0;i<2;i++)
    {
        for (int j=0; j<2;j++)

        {
        res[i][j]=a[i][j]+b[i][j];
           /* code */
        }
        
    }
    printf("Displaying the sum of both matrix\n");
     for(int i=0;i<2;i++)
    {
        for (int j=0; j<2;j++)

        {
            printf("%d\t",res[i][j]);
            if(j==1)
            printf("\n");
        }
        
    }
    return 0;
}