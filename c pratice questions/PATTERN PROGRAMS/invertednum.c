#include <stdio.h> 


int main()
{
    int i,rows;
    printf("enter the numbber of rows required\n");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for( int j=1;j<=i;++j)
        {
            printf("%d",j);

        }
        printf("\n");
    }
    return 0;
}