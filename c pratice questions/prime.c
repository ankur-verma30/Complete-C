#include<stdio.h>

int main(int argc, char const *argv[])
{

int num,count=0;
printf("Enter the number \n");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    if(num%i==0)
    count++;

}   
if(count==2)
printf("It is a prime number\n");
else 
printf("It is not a prime number");

   /* code */
    return 0;
}
