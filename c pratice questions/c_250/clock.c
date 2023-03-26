#include<stdio.h>
#include <math.h>
// double angleClock(int hour, int minutes){
//    double hr,min_div,div,h_div;
//    double min_div=minutes;
//    hr=double(hour)+(minutes/double(60);
//    h_div=hr*5;
//    if(h_div>60)
//        h_div=h_div-60;
// div=abs(min_div-h_div);
// return div*6;
// }
int main()
{
    int hr=12,min=30;
    float thr = float(hr)+min/float(60);
    float hd = thr*5;
    float md = float(min);
    float total = abs(md-hd);
    printf("%f",total * 6);
  //  printf("%lf",angleClock(hr,min));
    return 0;
}