/* a five digitb number is entered through the keyboard . write a program to  obtain a reversed number to  determine whether the original number is nreversed are eual or not.*/
#include<stdio.h>
int main()
{
    int n,revnum ,d1,d2,d3,d4,d5;         /*the original number is disignated by n;*/
printf("\n Enter the five digit number:");
scanf("%d",&n);
d5=n%10;
n=n/10;
d4=n%10;
n=n/10;
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
if(n==revnum)
printf("the original number is equal to a reversed number");
else
printf("the original number is not equal to the reversed number");
return 0;
}