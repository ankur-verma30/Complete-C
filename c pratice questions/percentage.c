/* if the marks obtained by the student iin five different subjects are input through the keyboard,write a program to find out the aggregate marks and percentage marks obtained by the student.
assume that the maximum marks that can be obtained by a student in each subject in each subject is 100.*/
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("\n Enter marks in 5 subjects:");
    scanf("%d  %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
    aggr=(m1+m2+m3+m4+m5);
    per=aggr/5;
    printf("aggregate marks=%d\n",aggr);
    printf("percentage marks=%f\n",per);
    return 0;
}
