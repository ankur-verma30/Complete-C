/*while purchasing certain items a discount of 10% is offered if the quantity purchased is more than 1000.if quantity
and price per item is input through the keyboard write the program to ulate total expanse.*/
#include <stdio.h>
int main()
{
    int qua;
    float p_per_item,expa;
    printf("the quantity of the product and price of each item");
    scanf("%d %f",&qua,&p_per_item);
    expa=qua*p_per_item;
    if(qua>1000)
expa=expa-0.1*expa;
else
expa=expa-0;
printf("the total amount of the items are:Rs=%f\n",expa);
return 0;
}
    