#include <stdio.h> 


int main()
{
    int i,rows;
    printf("enter the number of the rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}