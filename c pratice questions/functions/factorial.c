/* calculate factorial values of an integer uding the functions*/
#include <stdio.h> 
int fact(int);
int main()
{
    int num,factorial;
    printf("enter the number\n");
    scanf("%d",&num);
    factorial=fact(num);
    printf("the factorial of the %d is %d",num,factorial);
    return 0;
}
int fact(int num)
{
    int i;
    int factorial=1;
    for(i=1;i<=num;i++)
        factorial=factorial*i;
        
        return(factorial);
    
}