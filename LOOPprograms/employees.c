/*write a program to calculate overtime pay of 10 employees . overtime is paid at the rate of rs12.00 per hour for every hour of worked above 40 hours . assume that employess do not work for factoral part of an hour.*/

#include <stdio.h> 


int main()
{
    int hrs,over;
    
    int count=1;
    while(count<=10)
    {
        printf("\nenter the number of hrs for each of 10 employess\n");
    scanf("%d",&hrs);
    if(hrs>=40)
    over=(hrs-40)*12;
    else 
    over=0;
    printf("number of hrs %d is and overtime is %d",hrs,over);
    count++;
    }
    return 0;
}