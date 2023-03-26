/*convert the persons name into abbreviations */
#include <stdio.h> 
int main()
{
    char fname[20],mname[20],lname[20]; /*person's name*/
    printf("enter the  full name of the person(fname,mname,lname");  /*print the abbreviated name */
    scanf("%s %s %s",fname,mname,lname);
    printf("abbreviated name:\n");
    printf("%c.%c. %s\n",fname[0],fname[0],lname);
    return 0;
}