/* anyinteger is input through keyboard . write a program to find out whether it is an odd or even*/
#include <stdio.h>
int main()
{
    int a;
    printf(" Enter any integer\n");
    scanf("%d",&a);
    if(a%2==0)
    printf("the number entered is even number");
    else
    printf("the number entered is  an odd number");

    return 0;
}