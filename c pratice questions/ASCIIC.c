/* write a  program to print all the ascii values and their equivalent usong the while loop . the ascii may vary from 0 to 255.*/
#include <stdio.h> 


int main()
{
    int  i;
    int ch;
   
    while ( i<=255) /*loop counter condition */

    {
         printf("\n enter the ascii value  from the keyboard\n");
    scanf("%d",&ch);
      printf("the ASCII code and the character is %d=%c\n",ch,ch);
i++;/*increment of the loop counter*/
    }
            return 0;
}
