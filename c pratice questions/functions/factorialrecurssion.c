#include <stdio.h>
int fact=1; 
int factorial(int n)
{   
   if(n>1){
    for (int i = n; i >=1; i--)
    {
        /* code */fact=fact*i;
        factorial(n-1);
       
    }
    return fact;
   }
     else(n<1)
    break;

}
int main()
{    
    int n;
    printf("Input the number\n");
    scanf("%d",&n);
    
    printf("the factorial of the %d is %d",n,factorial(n));
    return 0;
}