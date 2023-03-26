/*write a program to find the absolute value of a number entered through the keyboard*/
#include<stdio.h>
int main()
{
    float a,b;
    printf("enter any real number you know");
    scanf("%f",&a);
     b=a*(-1);
    if(a>=0)
     printf("the absolute value is%10.3f\n",a);
     else
     printf("the absolute value is%f\n",b);
     return 0;

}