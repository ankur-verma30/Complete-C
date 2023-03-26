/*the ditance betweem two cities(in kilometer) is input through the keyboard. write the program to convert and print this distance in meters, feet , inches and centimeters*/
#include <stdio.h>
int main()
{
    float km,m,cm,in,ft;
    printf("\nenter the distance in kilometers:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    in=cm/2.54;
    ft=in/12;
    printf("distance in meters=%f\n",m);
    printf("distance in centimeters=%f\n",cm);
    printf("distance in feet=%f\n",ft);
    printf("distance in the inches=%f\n",in);
    return 0;
}
