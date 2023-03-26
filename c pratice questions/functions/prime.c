#include <stdio.h> 
int prime(int);

int main()
{
    int x,factors;
    printf("\n enter the number:\n");
    scanf("%d",&x);
    factors=prime(x);
    return 0;
}
int prime(int num)
{
    int i,j,k;
   for(int i=2;i<=num;i++)
   {
    if(num%i==0)
    {
        j=1;
    for(k=2;k<=i/2;k++)
    {
        if(i%k==0)
        {
            j=0;
            break;}
    }
    if(j==1)
    {
            printf("%d is a prime factor\n",i);
    }
    }
   }
   printf("WOW! we got the factors");
   return(i);
    }