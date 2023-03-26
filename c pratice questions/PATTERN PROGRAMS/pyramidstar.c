#include <stdio.h> 
int main()
{
    int i,rows,sp=0,k;
    printf("enter the number of rows required\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,sp=0)
{    
        for(k=1;k<=rows-i;++k)
        {
            printf(" ");
        }
        while( sp!=2*i-1)
        {
      printf("*");
      ++sp;
        }
        printf("\n");
}
    return 0;
} 