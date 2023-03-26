/*write a program to calculate pay of 10 employees. overtime is paid at the rate of rs120 per hour per week worked above 40hrs. assume the employess do not work for fractional part of an hour.*/
#include<stdio.h>
int main()
{
    float otpay; int hour =1;
    while(i=10)    /*loop for 10 employees*/
    {
        printf("\n enter no.of hours worked:");
        scanf("%d",&hour);
        if(hour>=40)
        otpay=(hour-40)*120;
        else 
        otpay=0;
        printf("hours=%d overtime pay=Rs.%f\n",hour,otpay);
        i++;
    }
    return 0;
}
