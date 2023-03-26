#include <stdio.h> 


int main()
{
    int i,j,rows, k=0;
    printf("enter the number of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,k=0,k++)
{
    for(j=1;j<=rows-i;++j)
    {
        printf(" ");
    }
while(k!=2*i-1)
{   
    printf("%d",k+1); 
    k++;
}
printf("\n");
}
    return 0;
}