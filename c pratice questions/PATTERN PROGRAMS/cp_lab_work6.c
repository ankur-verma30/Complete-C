#include <stdio.h> 


int main()
{
    int fact=1,i,n;
    printf("enter the number for the factrial\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        fact=fact*i;
    printf("the factorial of the %d is %d\n",n,fact);   
    
    return 0;
}