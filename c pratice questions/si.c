/*calculation of simplle intrest*/
#include<stdio.h>
#include<conio.h>
int main()
{ 
/* the simple intrest is written again wiith while  loop
*/
    int p, n, count;
    float r, si;
    count=1;
    /* 
    int p,n;
    float r,si;
    printf("enter the value of time taken and the rate of intrest");
    scanf("%d %d %f",&p,&n,&r);
    si=p*n*r/100;
    printf("%f\n",si); */
    while(count<=3)
    {
        printf("\n enter the  values of p,n and r\n");
        scanf("%d %d %f",&p,&n,&r);
        si=(p*n*r)/100;
        printf("simple intrest\n%f",si);
        count=count+1;
    }

    return 0;
}