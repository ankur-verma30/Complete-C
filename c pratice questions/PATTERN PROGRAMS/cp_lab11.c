#include <stdio.h> 


int main()
{
    int i,n,prime=0;
    printf("Enter the  Number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
if(n%i==0)
     prime++;
 else
    continue;
    }
    if(prime==2)
    printf("this is a prime number\n");
    else
   { 
    if(n==1)
    {
    printf("this is not a prime numner\n");
    printf("the number is neither prime not composite number");
    }
   }

        return 0;
}