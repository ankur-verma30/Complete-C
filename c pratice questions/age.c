/*if the ages of ram , shyam and ajay are input through the keyboard . write the program to determine the youngest of three */
#include<stdio.h>
int main()
{
 int R_age,S_age,A_age;
 printf("enter the age of ram ,shyam,ajay\n");
 scanf("%d %d %d",&R_age,&S_age,&A_age);
 if(R_age<S_age)
 {
    if(R_age<A_age)
    printf("ram is younger among three");
    else
    printf("ajay is younger among three of them");
   
}
else{
    if(S_age<A_age)
    printf("shyam is younger among three of them%d\n",S_age);
    else
    printf("ajay is youngest%d\n",A_age);
}return 0;
}