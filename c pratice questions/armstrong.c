/* to find the armstrong number */
#include<stdio.h>
#include<math.h>
int main()
{
    int p,a,d1,d2,d3,d4 ,c;
int n=4;
    printf("enter any four digit number\n");
    scanf("%d",&a);
    p=a; 
    d1=a/1000;
    a=a%1000;
    d2=a/100;
    a=a%100;
    d3=a/10;
    a=a%10;
    d4=a;
     c=pow(d1,n)+pow(d2,n)+pow(d3,n)+ pow(d4,n);
    if(p==c)
    printf("this is an armstrong number");
    else
    printf("this is not an armstrong number");
    return 0;
    }


