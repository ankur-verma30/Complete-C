/* an year is inputted through keyboard . write a program to determine whether the year is a leap year */
#include <stdio.h>
int main()
{/*
    int year;
    printf("\nEnter the year ");
    scanf("%d",&year);
    if(year%100==0)
 {   
        if(year%400==0)
        printf("this is a leap year \n");

        else
        printf("this is not a leap year");
 }
            else
            {
                            if(year%4==0)
                printf("this is a leap year");
                else
                printf("not a leap year");
            } */
            int year;
            printf("enter the year \n");
            scanf("%d",&year);
            if(year%400==0||year%100!=0&&year%4==0)
            printf("this is a leap year ");
            else
            printf("this is not a leap year ");
            
            
                    return 0;
            }
    
