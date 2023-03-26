/* calculate ramesh's gross salary */
#include <stdio.h>
int main()
{
    float bp,da, hra, grpay;
    printf("\nenter basic salary of the ramesh");
    scanf("%f",&bp);
    da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("basic salary of ramesh=%f\n",bp);
    printf("dearness allowance=%f\n",da);
    printf("house rent allowance=%f\n",hra);
    printf("gross pay of rameshis=%f\n",grpay);
    
    return 0;
}