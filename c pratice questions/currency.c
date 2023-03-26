/* consider a currency system in which there are notes of six denominators namely re1,2,5,10,50and rs100.if the sum of rs N is entered through the keyboard , write a program to compute the smallest number of the notes that will compute the rs N.*/
#include <stdio.h>
int main()
{
    int amount, nohun, nofifty, noten,nofive,none,notwo, total;
    printf("\n Enter the amount");
    scanf("%d",&amount);
    nohun=amount/100;
    amount=amount%100;
    nofifty=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    none=amount/1;
    amount=amount%1;
    total=nohun+nofifty+noten+nofive+none+notwo;
    printf("smallest number of notes-%d",total);
    return 0;
}