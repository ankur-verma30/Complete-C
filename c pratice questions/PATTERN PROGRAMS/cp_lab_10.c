#include <stdio.h> 


int main()
{
    int n,sum=0,i;
    printf("Enter the natural number assigned by the user\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        sum=sum+(i*i);
    printf("the sum of the square of %d is %d ",n,sum);
    return 0;
}