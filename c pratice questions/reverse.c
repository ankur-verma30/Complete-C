/* if a five digit number is input through the keyboard, write a program to reverse the number;*/
#include <stdio.h>
#include<string.h>

/*int main()
{
int n,d5,d4,d3,d2,d1;
long int revnum;
printf("\n Enter the five digit number:");
scanf("%d",&n);
d5=n%10;
n=n/10;
d4=n%10;
n=n/10;
d3=n%10;
n=n/10;
d2=n%10;
n=n/10;
d1=n%10;
revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
printf("\n the reverse of the number is%d",revnum);
return 0;
}
*/
int main()
{
    char ch[50],temp;int n;
    printf("\n Enter the any digit number upto 40:");
    scanf("%s",ch);
   n=strlen(ch);
    for(int i=0;i<n;i++)
    {  temp=ch[i];
        
        ch[i]=ch[n-1-i];
        ch[n-1-i]=temp;
        
    }
    printf("%s",ch);
        printf(" ");
    return 0;
}
