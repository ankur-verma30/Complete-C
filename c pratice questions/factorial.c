/*factorial of any number*/
#include<stdio.h>
int main()
   {
     int a, fact=1;
   printf("enter the number you want to find the factorial of:\n");
   scanf("%d",&a);
   for(int i=1;i<=a;i++)
   {
   fact=fact*i;
   }
   printf("factrial of the number is %d",fact);
   return 0;
   }
