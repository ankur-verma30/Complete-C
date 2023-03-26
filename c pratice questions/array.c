#include <stdio.h> 
#include <conio.h>
int main()
{
    
    int i,j,rows,columns,arr[20][20];

    printf("enter the numberr of rows and columns");
    scanf("%d %d",&rows,&columns);

    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=columns;j++)
        {
        printf("Input the elemnts of the array");
        scanf("%d %d",arr[i][j]);

    }
    }
     for(i=0;i<=rows;i++)
     {
        for(j=0;j<=columns;j++)
        {
        printf("the array is %d",arr[i][j]);
     }

     }
     getch();
    return 0;
}