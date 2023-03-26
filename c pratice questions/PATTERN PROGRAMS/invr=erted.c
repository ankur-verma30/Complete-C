#include <stdio.h> 


int main()
{
    int  i,rows;
    printf("enter the number of required columns\n");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for( int j=1;j<=i;++j)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}